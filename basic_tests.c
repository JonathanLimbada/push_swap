/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_tests.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <jlimbada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 16:09:42 by jlimbada          #+#    #+#             */
/*   Updated: 2019/08/30 08:33:51 by jlimbada         ###   ########.fr       */
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
	else if (i == 4)
		ft_putendl("\033[31mError : bad flag\033[00m");
	exit(1);
}

int		has_space(char *nums)
{
	int	i;

	i = 0;
	while (nums[i])
	{
		if (nums[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}
