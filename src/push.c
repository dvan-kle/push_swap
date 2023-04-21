/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 02:56:49 by dvan-kle      #+#    #+#                 */
/*   Updated: 2023/04/21 16:56:49 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	push(t_list **from_stack, t_list **to_stack)
{
	t_list	*top_from;
	t_list	*top_to;
	t_list	*tmp;

	top_from = *from_stack;
	top_to = *to_stack;
	tmp = top_from;
	top_from = top_from->next;
	*from_stack = top_from;
	if (!top_to)
	{
		top_to = tmp;
		top_to->next = NULL;
		*to_stack = top_to;
	}
	else
	{
		tmp->next = top_to;
		*to_stack = tmp;
	}
	return (0);
}

// Take the first element at the top of a and put it at the top of b.
void	pa(t_list **stack_a, t_list **stack_b)
{
	push(stack_a, stack_b);
	ft_putstr_fd("pa\n", 1);
}

// Take the first element at the top of b and put it at the top of a.
void	pb(t_list **stack_b, t_list **stack_a)
{
	push(stack_b, stack_a);
	ft_putstr_fd("pb\n", 1);
}
