/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baysick.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 10:20:51 by jlimbada          #+#    #+#             */
/*   Updated: 2019/07/22 13:39:56 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_time(char **argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}

void	y22t(int argc, char **argv)
{
	int	j;

	j = 0;
	while (j < argc)
	{
		if (ft_isnum(argv[j]) == 0)
		{
			free_time(argv);
			oof();
		}
		j++;
	}
}

void	d2pp2l(int argc, char **argv)
{
	int	i;
	int	j;
	int	*args;

	i = 0;
	args = (int*)malloc((argc) * sizeof(int));
	while (i < argc)
	{
		args[i] = ft_atoi(argv[i]);
		i++;
	}
	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (args[i] == args[j])
			{
				free(args);
				free_time(argv);
				oof();
			}
			j++;
		}
		i++;
	}
	free(args);
}

void	big_twoof(int argc, char **argv)
{
	int		i;
	long	*args;

	i = 0;
	args = (long*)malloc((argc) * sizeof(long));
	while (i < argc)
	{
		args[i] = ft_atol(argv[i]);
		i++;
	}
	i = 0;
	while ( i < argc)
	{
		if (args[i] > 2147483647 || args[i] < -2147483648)
		{
			free_time(argv);
			free(args);
			oof();
		}
		i++;
	}
	free(args);
}
