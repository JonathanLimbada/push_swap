/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 12:37:31 by jlimbada          #+#    #+#             */
/*   Updated: 2019/08/16 12:39:40 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			main(int argc, char **argv)
{
	t_pose	*stack_a;
	t_pose	*stack_b;

	stack_b = NULL;
	if (argc < 2)
		return (0);
	if (argc == 2)
		stack_a = split_time(argc, argv);
	else
	{
		errors(argc, argc, argv);
		stack_a = listint(argc, argc, argv);
	}
	read_time(&stack_a, &stack_b);
	if (!(stack_b) && (checks(&stack_a) != 0))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	print_stack(&stack_a, 'A');
	print_stack(&stack_b, 'B');
	freestack(&stack_a);
	freestack(&stack_b);
	return (0);
}
