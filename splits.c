/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splits.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <jlimbada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 12:12:05 by jlimbada          #+#    #+#             */
/*   Updated: 2019/08/29 16:52:36 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pose		*split_time(char **argv)
{
	t_pose	*stack;
	char	**arg;

	arg = ft_strsplit(argv[0], ' ');
	errors(arg_size(arg), arg, 1);
	stack = listint(arg_size(arg), arg);
	free_time(arg);
	return (stack);
}

int			arg_size(char **arg)
{
	int		i;

	i = 0;
	while (arg[i] != '\0')
	{
		i++;
	}
	return (i);
}

int			flags(int ac, char **av)
{
	int		i;
	int		l;

	i = 1;
	l = 1;
	while (i < ac)
	{
		if (ft_strequ(av[i], "-c"))
			l += 1;
		if (ft_strequ(av[i], "-v"))
			l += 1;
		i++;
	}
	return (l);
}
