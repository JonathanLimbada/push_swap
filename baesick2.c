/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baesick2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 12:12:05 by jlimbada          #+#    #+#             */
/*   Updated: 2019/07/20 15:25:15 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pose	*split_time(int argc, char **argv)
{
	char	**arg;
	int		i;

	i = 0;
	arg = ft_strsplit(str, ' ');
	is_lit(arg_size(arg), argc, **argv);
	while (arg[i] != '\0')
	{
		free(arg[i]);
		i++;
	}
	free(arg);
}

int		arg_size(char **arg)
{
	int		i;

	i = 0;
	while (array[i] != '\0')
	{
		i++;
	}
	return (i);
}
