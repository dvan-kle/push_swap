/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 15:31:50 by dvan-kle      #+#    #+#                 */
/*   Updated: 2023/05/20 19:19:20 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	reverserotate(t_list **stack)
{
	t_list	*top;
	t_list	*bottom;

	if (!*stack || !(*stack)->next)
		return ;
	top = *stack;
	bottom = ft_lstlast(top);
	while (top->next != bottom)
		top = top->next;
	top->next = NULL;
	bottom->next = *stack;
	*stack = bottom;
}

// Shift down all elements of stack a by 1.
void	rra(t_list **stack_a)
{
	reverserotate(stack_a);
	ft_putstr_fd("rra\n", 1);
}

// Shift down all elements of stack b by 1.
void	rrb(t_list **stack_b)
{
	reverserotate(stack_b);
	ft_putstr_fd("rrb\n", 1);
}

// rra and rrb at the same time.
void	rrr(t_list **stack_a, t_list **stack_b)
{
	reverserotate(stack_a);
	reverserotate(stack_b);
	ft_putstr_fd("rrr\n", 1);
}
