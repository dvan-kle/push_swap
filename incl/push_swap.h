/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 21:03:49 by dvan-kle      #+#    #+#                 */
/*   Updated: 2023/05/20 19:21:59 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>
# include "../libft/libft.h"

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}	t_list;

void	error_return(char *str);
void	check_input(int argc, char **argv);
void	ft_lstclear(t_list **lst);
//List
void	ft_lstadd_back(t_list **stack, t_list *new);
t_list	*ft_lstlast(t_list *stack);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *stack);
void	printlist(t_list *stack);
//Instructions
void	swap(t_list **stack);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	push(t_list **from_stack, t_list **to_stack);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_b, t_list **stack_a);
void	rotate(t_list **stack);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	reverserotate(t_list **stack);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
//Sorting
bool	sorted_check(t_list *stack);
void	sort2(t_list **stack);
void	sort3(t_list **stack);
void	sort45(t_list **stack_a, t_list **stack_b, int len);
t_list	*find_smallest_content(t_list *stack);
int		get_node_position(t_list *stack, t_list *node);
void	simple_sort(t_list **stack_a, t_list **stack_b);
//Radix
bool	is_sorted(t_list *stack);
void	radix_sort(t_list **stack_a, t_list **stack_b);

#endif