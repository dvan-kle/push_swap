/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/20 23:26:14 by dvan-kle      #+#    #+#                 */
/*   Updated: 2023/04/21 01:41:41 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

t_list	*ft_lstlast(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	while (tmp)
		tmp = tmp->next;
	return (tmp);
}

void	printlist(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	while (tmp != NULL)
	{
		ft_putnbr_fd(tmp->content, 1);
		ft_putendl_fd("", 1);
		tmp = tmp->next;
	}
}

void	ft_lstadd_back(t_list **stack, t_list *new)
{
	t_list	*lst;

	lst = ft_lstlast(*stack);
	if (!lst)
		*stack = new;
	else
		lst->next = new;
}
