/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackstuff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <jlimbada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 12:06:16 by jlimbada          #+#    #+#             */
/*   Updated: 2019/08/29 15:22:30 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pose		*listint(int argc, char **argv)
{
	t_pose	*stacka;
	t_pose	*node;
	int		i;

	i = 0;
	stacka = makelist(ft_atoi(argv[i]));
	i++;
	while (i < argc)
	{
		node = makelist(ft_atoi(argv[i]));
		tail_time(&stacka, node);
		i++;
	}
	sorting_value(&stacka);
	return (stacka);
}

void		head_time(t_pose **head, t_pose *node)
{
	t_pose	*temp;

	if (!(head) || !(node))
		return ;
	temp = *head;
	if (temp)
	{
		temp->previous = node;
		node->next = *head;
		node->previous = NULL;
		*head = node;
	}
	else
	{
		node->next = NULL;
		node->previous = NULL;
		*head = node;
	}
}

t_pose		*makelist(int value)
{
	t_pose	*stack;

	stack = (t_pose*)malloc(sizeof(*stack));
	if (stack)
	{
		stack->value = value;
		stack->next = NULL;
		stack->previous = NULL;
	}
	return (stack);
}

void		tail_time(t_pose **head, t_pose *node)
{
	t_pose	*temp;

	if (!(head) || (!(node)))
		return ;
	temp = *head;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = node;
		node->previous = temp;
	}
}
