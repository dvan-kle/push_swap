/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: danielvankleef <danielvankleef@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/15 16:00:52 by danielvankl   #+#    #+#                 */
/*   Updated: 2023/05/20 20:30:53 by danielvankl   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	free_stack(t_list **stack_a, t_list **stack_b)
{
	t_list	*pos;
	t_list	*i;

	if (!stack_a || !(*stack_a))
		return ;
	pos = (*stack_a);
	while (pos)
	{
		i = pos->next;
		free(pos);
		pos = i;
	}
	*stack_a = NULL;
	free(stack_a);
	free(stack_b);
}

void	assign_indices(t_list *stack)
{
	t_list	*current;
	t_list	*seeker;
	int		index;
	int		min_value;
	bool	found;

	index = 0;
	while (index < ft_lstsize(stack))
	{
		min_value = INT_MAX;
		current = stack;
		found = false;
		while (current)
		{
			if (current->index == -1 && current->content <= min_value)
			{
				min_value = current->content;
				seeker = current;
				found = true;
			}
			current = current->next;
		}
		if (found)
			seeker->index = index++;
	}
}

void	error_return(char *str)
{
	ft_putstr_fd(str, 1);
	exit(EXIT_FAILURE);
}

void	stackinit(t_list **stack, int argc, char **argv)
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
		new_node = ft_lstnew(ft_atoi(args[i]));
		new_node->index = -1;
		ft_lstadd_back(stack, new_node);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	check_input(argc, argv);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
	stackinit(stack_a, argc, argv);
	assign_indices(*stack_a);
	if (ft_lstsize(*stack_a) <= 5)
		simple_sort(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
	free_stack(stack_a, stack_b);
}
