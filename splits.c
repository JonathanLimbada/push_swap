/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splits.c                                         	:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 12:12:05 by jlimbada          #+#    #+#             */
/*   Updated: 2019/07/25 10:16:22 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	split_time(int argc, char **argv)
{
	char	**arg;
	int		i;

	i = 0;
	arg = ft_strsplit(argv[1], ' ');
	is_lit(arg_size(arg), argc, arg);
	free_time(arg);
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
