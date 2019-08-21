/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 12:33:05 by jlimbada          #+#    #+#             */
/*   Updated: 2019/08/19 10:14:38 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	else if (one < three && one > two && three > two)
		sa(stacka, 1);
	else if (one < two && two > three && one > three)
		rra(stacka, 1);
	else if (one > two && one > three && two < three)
		ra(stacka, 1);
}