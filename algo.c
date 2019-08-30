/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <jlimbada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 12:33:05 by jlimbada          #+#    #+#             */
/*   Updated: 2019/08/30 11:52:46 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	two(t_pose **stacka)
{
	if (checks(stacka) == 0)
		sa(stacka, 1);
}

void	three(t_pose **stacka)
{
	t_pose	*node;
	int		one;
	int		two;
	int		three;

	node = *stacka;
	one = node->value;
	two = node->next->value;
	three = node->next->next->value;
	if (one > two && two > three)
	{
		sa(stacka, 1);
		rra(stacka, 1);
	}
	else if (one < two && two > three && three > one)
	{
		rra(stacka, 1);
		sa(stacka, 1);
	}
	else if (one < three && one > two && three > two)
		sa(stacka, 1);
	else if (one < two && two > three && one > three)
		rra(stacka, 1);
	else if (one > two && one > three && two < three)
		ra(stacka, 1);
}

void	five(t_pose **stacka, t_pose **stackb, int len)
{
	int	s;
	int	i;
	int	e;

	i = 0;
	e = len;
	while (i < (len - 3))
	{
		s = smallest(stacka);
		rotate_time(stacka, s, e);
		pb(stacka, stackb, 1);
		e--;
		i++;
	}
	three(stacka);
	while (i > 0)
	{
		pa(stacka, stackb, 1);
		i--;
	}
}

void	twenty(t_pose **stacka, t_pose **stackb, int len)
{
	int	max;
	int	i;

	i = 1;
	max = 0;
	while (*stacka)
	{
		max += 5;
		while (i <= max)
		{
			if (!(*stacka))
				break ;
			if ((*stacka)->sort_val <= max)
			{
				pb(stacka, stackb, 1);
				i++;
			}
			else
				ra(stacka, 1);
		}
	}
	pa_time(stacka, stackb, len);
}

void	fifty(t_pose **stacka, t_pose **stackb, int len)
{
	int	max;
	int	i;

	i = 1;
	max = 0;
	while (*stacka)
	{
		max += 13;
		while (i <= max)
		{
			if (!(*stacka))
				break ;
			if ((*stacka)->sort_val <= max)
			{
				pb(stacka, stackb, 1);
				i++;
			}
			else
				ra(stacka, 1);
		}
	}
	pa_time(stacka, stackb, len);
}
