/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 21:03:28 by dvan-kle      #+#    #+#                 */
/*   Updated: 2023/01/27 16:55:38 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int push_swap(int ac, char **av)
{
    if (error_check(ac, av))
        return (ft_putstr("Error \n"), -1);
    
}

int error_check(int ac, char **av)
{
    int index;

    index = 0;
    if (ac <= 1)
        return (EXIT_FAILURE);
    while (index < ac)
    {
        if (ft_isdigit(av[index]))
            return (EXIT_FAILURE);
        index++;
    }
    return (EXIT_SUCCESS);
}

void create_list(int ac, char **av)
{
    int index;
    
    index = 0;
    while (ac < index)
    {
        ft_lstadd_back(ft_lstnew(ft_atoi(av[index])));
    }
}

stack	*ft_lstnew(int *content)
{
	stack *list;

	list = (stack *)malloc(sizeof(stack));
	if (!list)
		return (NULL);
	list -> content = content;
	list -> next = NULL;
	return (list);
}

