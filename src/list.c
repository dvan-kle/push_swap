/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/20 21:52:23 by dvan-kle      #+#    #+#                 */
/*   Updated: 2023/04/20 22:28:25 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

t_list	*ft_lstnew(int value)
{
	t_list	*new;

	new = (t_list *) malloc(sizeof(t_list *));
	if (!new)
		return (NULL);
	new->content = value;
	new->next = NULL;
	return (new);
}

t_list	*ft_lstlast(t_list *stack)
{
	if (!stack)
		return (NULL);
	while (stack && stack->next != NULL)
		stack = stack->next;
	return (stack);
}

void	ft_lstadd_back(t_list **stack, t_list *new)
{
	t_list *tmp;

	tmp = *stack;
	while(tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}
