/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checks.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 16:55:02 by dvan-kle      #+#    #+#                 */
/*   Updated: 2023/02/07 16:59:16 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int check_input(char **av)
{
    int tmp;
    int i;
    
    while (av[i] != NULL)
    {
        tmp = ft_atoi(av[i]);
        if (!ft_isdigit(av[i]))
            return (0);
    }
    
}