/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 02:48:19 by dvan-kle      #+#    #+#                 */
/*   Updated: 2023/05/20 19:20:58 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

// Swap the first 2 elements at the top of stack a.
void	swap(t_list **stack)
{
	t_list	*top;
	t_list	*second;

	if (!*stack || !(*stack)->next)
		return ;
	top = *stack;
	second = top->next;
	top->next = second->next;
	second->next = top;
	*stack = second;
}

// Swap the first 2 elements at the top of stack a.
void	sa(t_list **stack_a)
{
	swap(stack_a);
	ft_putstr_fd("sa\n", 1);
}

// Swap the first 2 elements at the top of stack b.
void	sb(t_list **stack_b)
{
	swap(stack_b);
	ft_putstr_fd("sb\n", 1);
}

// sa and sb at the same time.
void	ss(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_putstr_fd("ss\n", 1);
}
