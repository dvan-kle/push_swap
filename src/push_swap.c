/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: danielvankleef <danielvankleef@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/15 16:00:52 by danielvankl   #+#    #+#                 */
/*   Updated: 2023/04/20 22:32:58 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	error_return(char *str)
{
	ft_putstr_fd(str, 1);
	exit(-1);
}

void stackinit(t_list **stack, int argc, char **argv)
{
    t_list	*new_node;
	char	**args;
	int		i;

	if (argc == 2)
	{
		args = ft_split(argv[1], 32);
		i = 0;
	}
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		new_node = ft_lstnew(ft_atoi(argv[i]));
		ft_lstadd_back(stack, new_node);
		i++;
	}
	printf("INIT OK\n");
}

int main(int argc, char **argv)
{
    t_list **stack_a;
	t_list *stack_b;

	
	check_input(argc, argv);
	stack_a = (t_list **)malloc(sizeof(t_list **));
	stack_b = (t_list *)malloc(sizeof(t_list *));
	stackinit(stack_a, argc, argv);
	stack_b = NULL;
	// if (ft_lstsize(*stack_a) < 6)
	// 	simple_sort(stack_a, stack_b);
	// else
	// 	radix_sort(stack_a, stack_b);
}
