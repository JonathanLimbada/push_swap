/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <jlimbada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 16:24:48 by jlimbada          #+#    #+#             */
/*   Updated: 2019/08/26 16:34:47 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	hundred(t_pose **stacka, t_pose **stackb, int len)
{
	int	max;
	int	i;

	i = 1;
	max = 0;
	while (*stacka)
	{
		max += 17;
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