/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   radix.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 17:20:33 by dvan-kle      #+#    #+#                 */
/*   Updated: 2023/05/17 20:07:51 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int is_sorted(t_list *stack)
{
	t_list *temp = stack;
	t_list *temp2 = temp->next;

	while (temp->next != NULL)
	{
		if (temp->index > temp2->index)
			return (0);

		temp = temp->next;
		temp2 = temp2->next;
	}
	return (1);
}

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	size;

	i = 0;
	while (!is_sorted(*stack_a))
	{
		size = ft_lstsize(*stack_a);
		while (size--)
		{
			if (((*stack_a)->index >> i) & 1)
				ra(stack_a);
			else
				pa(stack_a, stack_b);
		}
		while (*stack_b != NULL)
			pb(stack_b, stack_a);
		i++;
	}
}
