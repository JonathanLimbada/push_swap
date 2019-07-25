/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackstuff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 12:06:16 by jlimbada          #+#    #+#             */
/*   Updated: 2019/07/25 16:55:14 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pose	*listint(int argc, char **argv)
{
	t_pose	*stackA;
	int	i;

	i = 1;
	stackA = head_time(ft_atoi(argv[i]));
	while (i < argc)
	{
		tail_time(stackA, head_time(argv[i]));
		i++;
	}
}

t_pose	*head_time(int value)
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

void	tail_time(t_pose **head, t_pose *node)
{
	t_pose	*temp;

	if(!(head) || (!(node)))
		return (0);
	temp = *head;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = node;
		node->previous = temp;
	}
}
