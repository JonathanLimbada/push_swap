/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_tests2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <jlimbada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 10:20:51 by jlimbada          #+#    #+#             */
/*   Updated: 2019/08/28 09:17:00 by jlimbada         ###   ########.fr       */
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

void	split_num(int argc, char **argv)
{
	int	j;

	j = 0;
	while (j < argc)
	{
		if (ft_isnum(argv[j]) == 0)
		{
			free_time(argv);
			oof(1);
		}
		j++;
	}
}

void	doubles2(int argc, char **argv)
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
		while (j < argc - 1)
		{
			if (args[i] == args[j])
				FFREE_OOF;
			j++;
		}
		i++;
	}
	free(args);
}

void	min_max2(int argc, char **argv)
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
	while (i < argc)
	{
		if (args[i] > 2147483647 || args[i] < -2147483648)
		{
			free_time(argv);
			free(args);
			oof(3);
		}
		i++;
	}
	free(args);
}

int		is_command(char *str)
{
	if (ft_strequ(str, "ra"))
		return (1);
	else if (ft_strequ(str, "rb"))
		return (1);
	else if (ft_strequ(str, "rr"))
		return (1);
	else if (ft_strequ(str, "sa"))
		return (1);
	else if (ft_strequ(str, "sb"))
		return (1);
	else if (ft_strequ(str, "ss"))
		return (1);
	else if (ft_strequ(str, "pa"))
		return (1);
	else if (ft_strequ(str, "pb"))
		return (1);
	else if (ft_strequ(str, "rra"))
		return (1);
	else if (ft_strequ(str, "rrb"))
		return (1);
	else if (ft_strequ(str, "rrr"))
		return (1);
	else
		return (0);
}
