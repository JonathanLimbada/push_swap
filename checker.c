/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 12:37:31 by jlimbada          #+#    #+#             */
/*   Updated: 2019/07/15 15:35:49 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	is_lit(int argc, char **argv)
{
	y33t(argc, argv);
	doppel(argc, argv);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	is_lit(argc, argv);
}
