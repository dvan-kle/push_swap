/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   radix.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 17:20:33 by dvan-kle      #+#    #+#                 */
/*   Updated: 2023/05/04 17:33:02 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	get_max_digits(t_list *head)
{
	int		max_digits;
	int		digits;
	int		num;
	t_list	*tmp;

	max_digits = 0;
	tmp = head;
	while (tmp != NULL)
	{
		digits = 0;
		num = tmp->content;
		while (num != 0)
		{
			digits++;
			num >>= 1;
		}
		if (digits > max_digits)
		{
			max_digits = digits;
		}
		tmp = tmp->next;
	}
	return (max_digits);
}

void	radix_sort(t_list **head)
{
	int		max_digits;
	int		i;
	int		index[2];
	int		count[2];
	int		bit;
	t_list	*tmp;
	t_list 	*output;
	t_list	*next;

	max_digits = get_max_digits(*head);
	i = 0;
	while (i < max_digits)
	{
		*output = NULL;
		count[2] = {0, 0};
		*tmp = *head;
		while (tmp != NULL)
		{
			bit = (tmp->content >> i) & 1;
			count[bit]++;
		tmp = tmp->next;
		}
		index[2] = {0, count[0]};
		index[1] = index[0] + count[0];
		tmp = *head;
		while (tmp != NULL) 
		{
			bit = (tmp->content >> i) & 1;
			*next = tmp->next;
			if (bit == 0)
			{
				tmp->next = output;
				output = tmp;
			}
			else
			{
				tmp->next = output;
				output = tmp;
			}
			index[bit]++;
			tmp = next;
		}
		*head = output;
		i++;
	}
}
