/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <jlimbada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 12:21:29 by jlimbada          #+#    #+#             */
/*   Updated: 2019/08/26 16:10:01 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			biggest(t_pose **stack)
{
	int		s;
	t_pose	*node;

	node = *stack;
	s = node->value;
	while (node)
	{
		if (s <= node->value)
			s = node->value;
		node = node->next;
	}
	return (s);
}

void		rotate_timeb(t_pose **stack, int p, int len)
{
	int		i;

	i = position(stack, p);
	if (i <= (len / 2))
	{
		while (i > 0)
		{
			rb(stack, 1);
			i--;
		}
	}
	else
	{
		i = len - i;
		while (i > 0)
		{
			rrb(stack, 1);
			i--;
		}
	}
}

int			position(t_pose **stack, int p)
{
	int		i;
	t_pose	*node;

	node = *stack;
	i = 0;
	while (node && node->value != p)
	{
		node = node->next;
		i++;
	}
	return (i);
}

void		pa_time(t_pose **stacka, t_pose **stackb, int len)
{
	while (*stackb)
	{
		rotate_timeb(stackb, biggest(stackb), len);
		pa(stacka, stackb, 1);
		len--;
	}
}
