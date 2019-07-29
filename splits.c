/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baesick2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 12:12:05 by jlimbada          #+#    #+#             */
/*   Updated: 2019/07/26 09:59:13 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pose	*split_time(int argc, char **argv)
{
	t_pose	*stack;
	char	**arg;
	int		i;

	i = 0;
	arg = ft_strsplit(argv[1], ' ');
	is_lit(arg_size(arg), argc, arg);
	stack = listint(arg_size(arg), argc, arg);
	free_time(arg);
	return (stack);
}

int		arg_size(char **arg)
{
	int		i;

	i = 0;
	while (arg[i] != '\0')
	{
		i++;
	}
	return (i);
}