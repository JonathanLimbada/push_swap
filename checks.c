/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <jlimbada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 12:32:57 by jlimbada          #+#    #+#             */
/*   Updated: 2019/08/30 11:55:56 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <time.h>

void		errors(int count, char **argv, int check)
{
	split_num(count, argv, check);
	doubles2(count, argv, check);
	min_max2(count, argv, check);
}

void		print_stack(t_pose **head, char stack_id)
{
	t_pose	*node;

	node = *head;
	if (node)
	{
		ft_putstr("--- Stack ");
		ft_putchar(stack_id);
		ft_putendl(" ---");
		while (node)
		{
			ft_putnbr(node->value);
			ft_putendl("");
			node = node->next;
		}
		ft_putendl("---------------");
		usleep(100000);
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

void		print_count(t_count *count)
{
	ft_putendl("Command Count:");
	ft_putstr("pa: ");
	ft_putnbr_nl(count->pa);
	ft_putstr("pb: ");
	ft_putnbr_nl(count->pb);
	ft_putstr("sa: ");
	ft_putnbr_nl(count->sa);
	ft_putstr("sb: ");
	ft_putnbr_nl(count->sb);
	ft_putstr("ss: ");
	ft_putnbr_nl(count->ss);
	ft_putstr("ra: ");
	ft_putnbr_nl(count->ra);
	ft_putstr("rb: ");
	ft_putnbr_nl(count->rb);
	ft_putstr("rr: ");
	ft_putnbr_nl(count->rr);
	ft_putstr("rra: ");
	ft_putnbr_nl(count->rra);
	ft_putstr("rrb: ");
	ft_putnbr_nl(count->rrb);
	ft_putstr("rrr: ");
	ft_putnbr_nl(count->rrr);
}
