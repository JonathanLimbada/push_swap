/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baesick.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 16:09:42 by jlimbada          #+#    #+#             */
/*   Updated: 2019/07/20 16:35:36 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	oof(void)
{
	ft_putendl("Error");
	exit(1);
}

void	y33t(int count, int argc, char **argv)
{
	int	j;

	j = 1;
	if (argc == 2)
	{
		j = 0;
		while (j < count)
		{
			if (ft_isnum(argv[j]) == 0)
				oof();
			j++;
		}

	}
	else
	{
		while (j < argc)
		{
			if (ft_isnum(argv[j]) == 0)
				oof();
			j++;
		}
	}
}

void	doppel(int count, int argc, char **argv)
{
	int	i;
	int	j;
	int	*args;

	i = 1;
	args = (int*)malloc((argc - 1) * sizeof(int));
	while (i < argc)
	{
		args[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	i = 0;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (args[i] == args[j])
				free(args);
				oof();
			j++;
		}
		i++;
	}
	free(args);
}

void	big_oof(int count, int argc, char **argv)
{
	int		i;
	int		j;
	long	*args;

	i = 1;
	args = (long*)malloc((argc - 1) * sizeof(long));
	while (i < argc)
	{
		args[i - 1] = ft_atol(argv[i]);
		i++;
	}
	i = 0;
	while ( i < argc - 1)
	{
		if (args[i] > 2147483647 || args[i] < -2147483648)
		{
			free(args);
			oof();
		}
		i++;
	}
	free(args);
}
