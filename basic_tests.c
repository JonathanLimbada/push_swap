/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_tests.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <jlimbada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 16:09:42 by jlimbada          #+#    #+#             */
/*   Updated: 2019/08/29 14:42:28 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	oof(int i)
{
	if (i == 0)
		ft_putendl("\033[31mError\033[00m");
	else if (i == 1)
		ft_putendl("\033[31mError : not a number\033[00m");
	else if (i == 2)
		ft_putendl("\033[31mError : duplicate\033[00m");
	else if (i == 3)
		ft_putendl("\033[31mError : int overflow\033[00m");
	exit(1);
}

int		space(char **av, int ac)
{
	int	i;

	i = 0;
	while (ft_strequ(av[i], "-c"))
		i++;
	if (i == ac - 1)
		return (1);
	return (0);
}
