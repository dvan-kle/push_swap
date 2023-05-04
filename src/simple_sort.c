/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   simple_sort.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: danielvankleef <danielvankleef@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/15 17:30:11 by danielvankl   #+#    #+#                 */
/*   Updated: 2023/05/04 16:34:45 by dvan-kle      ########   odam.nl         */
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
		sort3(stack_a, stack_b);
	// else if (lstsize == 4)
	// 	sort4(stack_a, stack_b);
	// else if (lstsize == 5)
	// 	sort5(stack_a, stack_b);
}

void	sort2(t_list **stack_a)
{
	if (!sorted_check(*stack_a))
		sa(stack_a);
	sorted_check(*stack_a);
}

void	sort3(t_list **stack_a, t_list **stack_b)
{
	stack_a = NULL;
	stack_b = NULL;
}
