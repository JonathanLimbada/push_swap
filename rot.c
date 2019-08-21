/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:28:26 by jlimbada          #+#    #+#             */
/*   Updated: 2019/08/17 14:08:49 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_pose **stack, int push)
{
	t_pose	*first;
	t_pose	*last;

	if ((!*stack) || (*stack)->next == NULL)
		return ;
	first = *stack;
	last = *stack;
	while (last->next != NULL)
		last = last->next;
	*stack = first->next;
	first->next = NULL;
	last->next = first;
	first->previous = last;
	if (push)
		ft_putendl("ra");
}

void	rb(t_pose **stack, int push)
{
	t_pose	*first;
	t_pose	*last;

	if ((!*stack) || (*stack)->next == NULL)
		return ;
	first = *stack;
	last = *stack;
	while (last->next != NULL)
		last = last->next;
	*stack = first->next;
	first->next = NULL;
	last->next = first;
	first->previous = last;
	if (push)
		ft_putendl("rb");
}

void	rr(t_pose **stacka, t_pose **stackb, int push)
{
	ra(stacka, 0);
	rb(stackb, 0);
	if (push)
		ft_putendl("rr");
}
