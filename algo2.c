/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <jlimbada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 14:44:18 by jlimbada          #+#    #+#             */
/*   Updated: 2019/08/27 15:35:11 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			list_len(t_pose **stack)
{
	int		i;
	t_pose	*list;

	i = 0;
	list = *stack;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}

int			smallest(t_pose **stack)
{
	int		s;
	t_pose	*node;

	node = *stack;
	s = node->value;
	while (node)
	{
		if (s >= node->value)
			s = node->value;
		node = node->next;
	}
	return (s);
}

void		rotate_time(t_pose **stack, int p, int len)
{
	int		i;

	i = position(stack, p);
	if (i <= (len / 2))
	{
		while (i > 0)
		{
			ra(stack, 1);
			i--;
		}
	}
	else
	{
		i = len - i;
		while (i > 0)
		{
			rra(stack, 1);
			i--;
		}
	}
}

void		do_pushswap(t_pose **stacka, t_pose **stackb, int len)
{
	if (len == 2)
		two(stacka);
	if (len == 3)
		three(stacka);
	if (len == 4 || len == 5)
		five(stacka, stackb, len);
	if (len > 5 && len <= 20)
		twenty(stacka, stackb, len);
	if (len > 20 && len <= 50)
		fifty(stacka, stackb, len);
	if (len > 50 && len <= 105)
		hundred(stacka, stackb, len);
	if (len > 105 && len <= 250)
		twofifty(stacka, stackb, len);
	if (len > 250 && len <= 505)
		five_hundred(stacka, stackb, len);
	else
		sort_time(stacka, stackb, len);
}

void		sorting_value(t_pose **stack)
{
	int		weight;
	t_pose	*node;
	t_pose	*fast;

	node = *stack;
	while (node)
	{
		weight = list_len(stack);
		node->sort_val = weight;
		fast = *stack;
		while (fast)
		{
			if (node->value < fast->value)
				node->sort_val--;
			fast = fast->next;
		}
		node = node->next;
	}
}
