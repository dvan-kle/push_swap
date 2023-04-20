/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 21:03:49 by dvan-kle      #+#    #+#                 */
/*   Updated: 2023/04/21 00:44:28 by dvan-kle      ########   odam.nl         */
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
t_list	*ft_lstlast(t_list *stack);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *stack);
void	printlist(t_list *stack);

int	swap(t_list **stack);
int	sa(t_list **stack_a);
int	sb(t_list **stack_b);
int	ss(t_list **stack_a, t_list **stack_b);

#endif