/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 15:31:50 by dvan-kle      #+#    #+#                 */
/*   Updated: 2023/04/21 16:55:29 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	reverserotate(t_list **stack)
{
	t_list	*top;
	t_list	*bottom;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	top = *stack;
	bottom = ft_lstlast(top);
	while (top)
	{
		if (top->next->next == NULL)
		{
			top->next = NULL;
			break ;
		}
		top = top->next;
	}
	bottom->next = *stack;
	*stack = bottom;
	return (0);
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
