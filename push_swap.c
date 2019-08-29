/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <jlimbada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:01:13 by jlimbada          #+#    #+#             */
/*   Updated: 2019/08/29 14:29:48 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
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
	if (argc == 2)
		stack_a = split_time(argv);
	else
	{
		errors(argc, argv, 0);
		stack_a = listint(argc, argv);
	}
	if (!(stack_b) && (checks(&stack_a) != 0))
		return (0);
	do_pushswap(&stack_a, &stack_b, list_len(&stack_a));
	freestack(&stack_a);
	freestack(&stack_b);
	return (0);
}
