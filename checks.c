/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checks.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 16:55:02 by dvan-kle      #+#    #+#                 */
/*   Updated: 2023/04/13 13:18:20 by danielvankl   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

static int check_digits(char *str)
{
    int i;
    
    i = 0;
	if (str[0] == '-')
		i++;
	while (str[i] == '0')
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
	while(args[i])
	{
		if (nb == ft_atoi(args[i]))
			return (0);
		i++;
	}
	return (1);
}


void check_input(int argc, char **argv)
{
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
		int temp;

		temp = ft_atoi(args[i]);
		if (!check_digits(args[i]))
			error_return("Invalid input\n");
		if (!check_doubles(args, temp, i))
			error_return("Invalid input\n");
		i++;
	}
	printf("INPUT OK\n");
}