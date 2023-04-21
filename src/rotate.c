/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 02:46:25 by dvan-kle      #+#    #+#                 */
/*   Updated: 2023/04/21 02:48:54 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	rotate(t_list **stack)
{
	t_list	*top;
	t_list	*bottom;

	top = *stack;
	bottom = ft_lstlast(top);
	top = top->next;
	bottom->next = top;
	top->next = NULL;
}

// Shift up all elements of stack a by 1.
void	ra(t_list **stack_a)
{
	rotate(stack_a);
	ft_putstr_fd("ra\n", 1);
}

// Shift up all elements of stack b by 1.
void	rb(t_list **stack_b)
{
	rotate(stack_b);
	ft_putstr_fd("ra\n", 1);
}

// ra and rb at the same time.
void	rr(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putstr_fd("rr\n", 1);
}
