/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checks.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 16:55:02 by dvan-kle      #+#    #+#                 */
/*   Updated: 2023/06/01 02:36:06 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

static int	check_digits(char *str)
{
	int	i;

	i = 0;
	if ((str[0] == '-' && str[1] == '\0') || str[0] == '+')
		return (0);
	if (str[0] == '-')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	check_doubles(char **args, int nb, int i)
{
	i++;
	while (args[i])
	{
		if (nb == ft_atoi(args[i]))
			return (0);
		i++;
	}
	return (1);
}

void	check_input(int argc, char **argv)
{
	char		**args;
	int			i;
	long long	temp;

	if (argc == 2)
	{
		args = ft_split(argv[1], 32);
		if (!args)
			ft_free(args, true);
		i = 0;
	}
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		temp = ft_atoi(args[i]);
		if (!check_digits(args[i]) || !check_doubles(args, temp, i++)
			|| (temp > INT_MAX || temp < INT_MIN))
			error_return("Error\n");
	}
	if (argc == 2)
		ft_free(args, false);
}

bool	sorted_check(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	while (tmp && tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return (false);
		tmp = tmp->next;
	}
	return (true);
}

void	ft_free(char **ptr, bool error)
{
	int	i;

	i = 0;
	while (ptr[i])
		i++;
	while (i >= 0)
		free(ptr[i--]);
	free(ptr);
	if (error == true)
		exit(EXIT_FAILURE);
}
