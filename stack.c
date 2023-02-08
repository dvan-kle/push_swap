/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stack.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 16:24:04 by dvan-kle      #+#    #+#                 */
/*   Updated: 2023/01/25 16:27:58 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

struct node *last;

last = NULL;

void lstadd_front(int nb)
{
    struct node *temp;
    
    temp = malloc(sizeof(struct node));
    
    if (last == NULL)
    {
        temp->content = nb;
        temp->next = temp;
        last = temp;
    }
}

struct node	*ft_lstnew(int *content)
{
	struct node *list;

	list = (struct node *)malloc(sizeof(struct node));
	if (!list)
		return (NULL);
	list -> content = content;
	list -> next = NULL;
	return (list);
}

void	ft_lstadd_back(struct node **list, struct node *new)
{
	struct node	*lst;

	lst = ft_lstlast(*list);
	if (!lst)
		*list = new;
	else
		lst->next = new;
}
