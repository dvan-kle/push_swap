/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   simple_sort.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: danielvankleef <danielvankleef@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/15 17:30:11 by danielvankl   #+#    #+#                 */
/*   Updated: 2023/05/20 19:20:47 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	simple_sort(t_list **stack_a, t_list **stack_b)
{
	int	lstsize;

	lstsize = ft_lstsize(*stack_a);
	if (sorted_check(*stack_a))
		exit (EXIT_SUCCESS);
	if (lstsize == 2)
		sa(stack_a);
	else if (lstsize == 3)
		sort3(stack_a);
	else if (lstsize == 4)
		sort45(stack_a, stack_b, 1);
	else if (lstsize == 5)
		sort45(stack_a, stack_b, 2);
}

void	sort3(t_list **stack)
{
	int	first;
	int	second;
	int	third;

	if (!(*stack) || !((*stack)->next) || !((*stack)->next->next))
		return ;
	first = (*stack)->index;
	second = (*stack)->next->index;
	third = (*stack)->next->next->index;
	if (first > second && second > third)
	{
		sa(stack);
		rra(stack);
	}
	else if (second > first && first > third && second > third)
		rra(stack);
	else if (first > second && first < third && second < third)
		sa(stack);
	else if (first > third && second < third && first > second)
		ra(stack);
	else if (first < third && second > third && first < second)
	{
		sa(stack);
		ra(stack);
	}
}

t_list	*find_smallest_index(t_list *stack)
{
	t_list	*tmp;
	t_list	*min_index_node;

	tmp = stack;
	min_index_node = tmp;
	while (tmp != NULL)
	{
		if (tmp->index < min_index_node->index)
			min_index_node = tmp;
		tmp = tmp->next;
	}
	return (min_index_node);
}

int	get_node_position(t_list *stack, t_list *node)
{
	t_list	*tmp;
	int		position;

	tmp = stack;
	position = 0;
	while (tmp != node && tmp != NULL)
	{
		position++;
		tmp = tmp->next;
	}
	return (position);
}

void	sort45(t_list **stack_a, t_list **stack_b, int len)
{
	t_list	*min_index_node;
	int		position;
	int		sizeb;

	while (len > 0)
	{
		min_index_node = find_smallest_index(*stack_a);
		position = get_node_position(*stack_a, min_index_node);
		if (position <= ft_lstsize(*stack_a) / 2)
		{
			while ((*stack_a) != min_index_node)
				ra(stack_a);
		}
		else
		{
			while ((*stack_a) != min_index_node)
				rra(stack_a);
		}
		pa(stack_a, stack_b);
		len--;
	}
	sort3(stack_a);
	sizeb = ft_lstsize(*stack_b);
	while (sizeb-- > 0)
		pb(stack_b, stack_a);
}
