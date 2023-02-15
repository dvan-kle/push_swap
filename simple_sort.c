/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   simple_sort.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: danielvankleef <danielvankleef@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/15 17:30:11 by danielvankl   #+#    #+#                 */
/*   Updated: 2023/02/15 17:30:21 by danielvankl   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void simple_sort(t_list **stack_a, t_list **stack_b)
{
	int	lstsize;

	lstsize = ft_lstsize(*stack_a);
	if (lstsize == 1)
		sorted_check(stack_a);
	else if (lstsize == 2)
		sort2(stack_a, stack_b);
	else if (lstsize == 3)
		sort3(stack_a, stack_b);
	else if (lstsize == 4)
		sort4(stack_a, stack_b);
	else if (lstsize == 5)
		sort5(stack_a, stack_b);
}