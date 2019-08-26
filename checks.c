/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <jlimbada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 12:32:57 by jlimbada          #+#    #+#             */
/*   Updated: 2019/08/26 16:21:06 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void		errors(int count, int argc, char **argv)
{
	if (argc == 2)
	{
		split_num(count, argv);
		doubles2(count, argv);
		min_max2(count, argv);
	}
	else
	{
		is_num(argc, argv);
		doubles(argc, argv);
		min_max(argc, argv);
	}
}

void		print_stack(t_pose **head, char stack_id)
{
	t_pose	*node;

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

int			checks(t_pose **stacka)
{
	t_pose	*node;
	int		tmp;

	if (!(stacka))
		return (0);
	node = *stacka;
	while (node->next)
	{
		tmp = node->value;
		node = node->next;
		if (tmp > node->value)
			return (0);
	}
	return (1);
}

void		freestack(t_pose **stack)
{
	t_pose	*temp;
	t_pose	*next;

	temp = *stack;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	*stack = NULL;
}
