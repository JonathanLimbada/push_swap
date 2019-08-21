/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:01:13 by jlimbada          #+#    #+#             */
/*   Updated: 2019/08/17 08:34:39 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		list_len(t_pose **stack)
{
	int	i;
	t_pose *list;

	i = 0;
	list = *stack;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}

void	do_pushswap(t_pose **stacka/*, t_pose **stackb*/, int len)
{
	if (len == 2)
		two(stacka);
	if (len == 3)
		three(stacka);
}

int		main(int argc, char **argv)
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
	do_pushswap(&stack_a/*, &stack_b*/, list_len(&stack_a));
	if (!(stack_b) && (checks(&stack_a) != 0))
		return (0);
	freestack(&stack_a);
	freestack(&stack_b);
	return (0);
}