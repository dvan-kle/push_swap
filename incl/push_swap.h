/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 21:03:49 by dvan-kle      #+#    #+#                 */
/*   Updated: 2023/04/20 22:13:34 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "../libft/libft.h"


typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;


void	error_return(char *str);
void    check_input(int argc, char **argv);


void	ft_lstadd_back(t_list **stack, t_list *new);
t_list	*ft_lstlast(t_list *head);
t_list	*ft_lstnew(int value);

#endif