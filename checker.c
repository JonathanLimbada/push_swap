/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <jlimbada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 12:37:31 by jlimbada          #+#    #+#             */
/*   Updated: 2019/08/30 11:12:40 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			main(int argc, char **argv)
{
	t_pose	*stack_a;
	t_pose	*stack_b;
	t_flags	flags;

	SHIFT;
	flag_check(&argc, &argv, &flags);
	stack_b = NULL;
	if (argc <= 0)
		return (0);
	if (has_space(argv[0]) && argc >= 2)
		oof(0);
	else if (has_space(argv[0]))
		stack_a = split_time(argv);
	else
	{
		errors(argc, argv, 0);
		stack_a = listint(argc, argv);
	}
	read_time(&stack_a, &stack_b, flags);
	if (!(stack_b) && (checks(&stack_a) != 0))
		ft_putendl("\033[32mOK\033[00m");
	else
		ft_putendl("\033[33mKO\033[00m");
	FREE_REAL_ESTATE;
	return (0);
}
