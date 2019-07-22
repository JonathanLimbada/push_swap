/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 12:37:31 by jlimbada          #+#    #+#             */
/*   Updated: 2019/07/22 13:50:59 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	is_lit(int count, int argc, char **argv)
{
	if (argc == 2)
	{
		y22t(count, argv);
		d2pp2l(count, argv);
		big_twoof(count, argv);
	}
	else
	{
		y33t(argc, argv);
		doppel(argc, argv);
		big_oof(argc, argv);
	}
}

int		main(int argc, char **argv)
{

	if (argc < 2)
		return (0);
	if (argc == 2)
		split_time(argc, argv);
	else
		is_lit(argc, argc, argv);
}
