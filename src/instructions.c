/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   instructions.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 15:31:50 by dvan-kle      #+#    #+#                 */
/*   Updated: 2023/04/21 00:14:16 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

// Swap the first 2 elements at the top of stack a.
int	swap(t_list **stack)
{
	t_list	*top;
	t_list	*next;
	int		tmp;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	top = *stack;
	next = top->next;
	tmp = top->content;
	top->content = next->content;
	next->content = tmp;
}

// Swap the first 2 elements at the top of stack a.
int	sa(t_list **stack_a)
{
	if (swap(stack_a) == -1)
		return (-1);
	ft_putstr_fd("sa\n", 1);
	return (0);
}

// Swap the first 2 elements at the top of stack b.
int	sb(t_list **stack_b)
{
	if (swap(stack_b) == -1)
		return (-1);
	ft_putstr_fd("sb\n", 1);
	return (0);
}

// sa and sb at the same time.
int	ss(t_list **stack_a, t_list **stack_b)
{
	if ((ft_lstsize(*stack_a) < 2) || (ft_lstsize(*stack_b) < 2))
		return (-1);
	swap(stack_a);
	swap(stack_b);
	ft_putstr_fd("ss\n", 1);
	return (0);
}

// Take the first element at the top of b and put it at the top of a.
void pa(stack **stack_a, stack **stack_b)
{
    
}

// Take the first element at the top of b and put it at the top of b.
void pb()
{
    
}

// Shift up all elements of stack a by 1.
void ra()
{
    
}

// Shift up all elements of stack b by 1.
void rb()
{
    
}

// ra and rb at the same time.
void rr()
{

}

// Shift down all elements of stack a by 1.
void rra()
{
    
}

// Shift down all elements of stack b by 1.
void rrb()
{
    
}

// rra and rrb at the same time.
void rrr()
{
    
}