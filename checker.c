/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <jlimbada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 12:37:31 by jlimbada          #+#    #+#             */
/*   Updated: 2019/08/29 15:52:53 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			main(int argc, char **argv)
{
	t_pose	*stack_a;
	t_pose	*stack_b;
	int		i;

	i = flags(argc, argv);
	stack_b = NULL;
	if (argc < 2)
		return (0);
	argc -= i;
	argv += i;
	if (space(argv, argc))
		stack_a = split_time(argv);
	else
	{
		errors(argc, argv, 0);
		stack_a = listint(argc, argv);
	}
	read_time(&stack_a, &stack_b);
	if (!(stack_b) && (checks(&stack_a) != 0))
		ft_putendl("\033[32mOK\033[00m");
	else
		ft_putendl("\033[33mKO\033[00m");
	freestack(&stack_a);
	freestack(&stack_b);
	return (0);
}
