/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 12:37:31 by jlimbada          #+#    #+#             */
/*   Updated: 2019/07/26 17:45:13 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

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

void		print_stack(t_pose **head, char stack_id)
{
	t_pose *node;

	node = *head;
	if (node)
	{
		printf("--- Stack %c ---\n", stack_id);
		while (node)
		{
			ft_putnbr(node->value);
			ft_putendl("");
			node = node->next;
		}
		printf("---------------\n");
	}
}

int		checks(t_pose **stacka)
{
	t_pose	*node;
	int		tmp;

	if (!(stacka))
		return (0);
	node = stacka;
	while (node->next)
	{
		tmp = node->value;
		node = node->next;
		if (tmp > node->value)
			return (0);
	}
	return (1);
}

void	freestack(t_pose *stackA, t_pose *
		)
{

}

int		main(int argc, char **argv)
{
	t_pose	*stack_A;
	t_pose	*stack_B;

	stack_B = NULL;
	if (argc < 2)
		return (0);
	if (argc == 2)
		stack_A = split_time(argc, argv);
	else
	{
		is_lit(argc, argc, argv);
		stack_A = listint(argc, argc, argv);
	}
	if (!(stack_B) && (checks(stack_A) != 0))
		write(1, "OK", 2);
	else
		write(1, "KO", 2);
	print_stack(&stack_A, 'A');
	return (0);
}
