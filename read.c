/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <jlimbada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 09:46:05 by jlimbada          #+#    #+#             */
/*   Updated: 2019/08/30 12:02:43 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_programs(t_pose **stacka, t_pose **stackb, char *str, t_count *count)
{
	if (ft_strequ(str, "sa"))
		sa(stacka, 0);
	else if (ft_strequ(str, "sb"))
		sb(stackb, 0);
	else if (ft_strequ(str, "ss"))
		ss(stacka, stackb, 0);
	else if (ft_strequ(str, "pa"))
		pa(stacka, stackb, 0);
	else if (ft_strequ(str, "pb"))
		pb(stacka, stackb, 0);
	else if (ft_strequ(str, "rra"))
		rra(stacka, 0);
	else if (ft_strequ(str, "rrb"))
		rrb(stackb, 0);
	else if (ft_strequ(str, "rrr"))
		rrr(stacka, stackb, 0);
	else if (ft_strequ(str, "ra"))
		ra(stacka, 0);
	else if (ft_strequ(str, "rb"))
		rb(stackb, 0);
	else if (ft_strequ(str, "rr"))
		rr(stacka, stackb, 0);
	if (count)
		count_me(str, count);
}

void	read_time(t_pose **stacka, t_pose **stackb, t_flags flags)
{
	char	*str;
	int		moves;
	t_count	*count;

	if (flags.c)
		count = count_time();
	else
		count = NULL;
	moves = 0;
	while (get_next_line(0, &str) > 0)
	{
		if (is_command(str))
		{
			do_programs(stacka, stackb, str, count);
			free(str);
			(flags.v) ? (SHOW) : (NULL);
			moves++;
		}
		else
			FREEMOOR;
	}
	(flags.m) ? (MOVES) : (NULL);
	(flags.c) ? (COUNT) : (NULL);
	(count != NULL) ? (free_count(&count)) : (NULL);
}

void	count_me(char *str, t_count *count)
{
	if (ft_strequ(str, "sa"))
		count->sa++;
	else if (ft_strequ(str, "sb"))
		count->sb++;
	else if (ft_strequ(str, "ss"))
		count->ss++;
	else if (ft_strequ(str, "pa"))
		count->pa++;
	else if (ft_strequ(str, "pb"))
		count->pb++;
	else if (ft_strequ(str, "rra"))
		count->rra++;
	else if (ft_strequ(str, "rrb"))
		count->rrb++;
	else if (ft_strequ(str, "rrr"))
		count->rrr++;
	else if (ft_strequ(str, "ra"))
		count->ra++;
	else if (ft_strequ(str, "rb"))
		count->rb++;
	else if (ft_strequ(str, "rr"))
		count->rr++;
}

void	free_count(t_count **count)
{
	free(*count);
	(*count) = NULL;
}
