/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baesick.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 16:09:42 by jlimbada          #+#    #+#             */
/*   Updated: 2019/07/15 15:58:09 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	oof(void)
{
	ft_putendl("Error");
	exit(1);
}

void	y33t(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		while (argv[i])
		{
			if (ft_isdigit(argv[i]) != 0 || argv[i] == '-')
			{
				oof();
			}
			i++;
		}
		j++;
		i = 0;
	}
}

void	doppel(int argc, char **argv)
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
				oof();
			j++;
		}
		i++;
	}
	free(args);
}
