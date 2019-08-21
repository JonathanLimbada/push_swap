/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 16:01:04 by jlimbada          #+#    #+#             */
/*   Updated: 2019/08/17 14:15:33 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_pose **stack, int push)
{
	t_pose	*temp;
	t_pose	*last;

	if ((!*stack) || (*stack)->next == NULL)
		return ;
	last = *stack;
	temp = NULL;
	while (last->next != NULL)
	{
		temp = last;
		last = last->next;
	}
	temp->next = NULL;
	last->previous = NULL;
	last->next = *stack;
	*stack = last;
	if (push)
		ft_putendl("rra");
}

void	rrb(t_pose **stack, int push)
{
	t_pose	*temp;
	t_pose	*last;

	if ((!*stack) || (*stack)->next == NULL)
		return ;
	last = *stack;
	temp = NULL;
	while (last->next != NULL)
	{
		temp = last;
		last = last->next;
	}
	temp->next = NULL;
	last->previous = NULL;
	last->next = *stack;
	*stack = last;
	if (push)
		ft_putendl("rrb");
}

void	rrr(t_pose **stacka, t_pose **stackb, int push)
{
	rra(stacka, 0);
	rrb(stackb, 0);
	if (push)
		ft_putendl("rrr");
}
