/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <jlimbada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 09:46:05 by jlimbada          #+#    #+#             */
/*   Updated: 2019/08/29 15:19:28 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_programs(t_pose **stacka, t_pose **stackb, char *str)
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
}

void	read_time(t_pose **stacka, t_pose **stackb)
{
	char	*str;

	while (get_next_line(0, &str) > 0)
	{
		if (is_command(str))
		{
			do_programs(stacka, stackb, str);
			free(str);
		}
		else
		{
			freestack(stacka);
			freestack(stackb);
			free(str);
			oof(0);
		}
	}
	print_stack(stacka, 'A');
	print_stack(stackb, 'B');
}
