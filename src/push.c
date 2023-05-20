/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 02:56:49 by dvan-kle      #+#    #+#                 */
/*   Updated: 2023/05/20 19:17:33 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	push(t_list **from_stack, t_list **to_stack)
{
	t_list	*moving;

	if (!*from_stack)
		return ;
	moving = *from_stack;
	*from_stack = (*from_stack)->next;
	moving->next = *to_stack;
	*to_stack = moving;
}

// Take the first element at the top of a and put it at the top of b.
void	pa(t_list **stack_a, t_list **stack_b)
{
	push(stack_a, stack_b);
	ft_putstr_fd("pb\n", 1);
}

// Take the first element at the top of b and put it at the top of a.
void	pb(t_list **stack_b, t_list **stack_a)
{
	push(stack_b, stack_a);
	ft_putstr_fd("pa\n", 1);
}
