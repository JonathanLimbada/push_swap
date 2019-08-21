/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 12:56:30 by jlimbada          #+#    #+#             */
/*   Updated: 2019/08/17 14:27:02 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_pose **stack, int push)
{
	t_pose	*temp;
	t_pose	*nextmp;

	if (!*stack)
		return ;
	if ((*stack)->next != NULL)
	{
		temp = *stack;
		nextmp = (*stack)->next;
		temp->previous = nextmp;
		temp->next = nextmp->next;
		nextmp->previous = NULL;
		nextmp->next = temp;
		*stack = nextmp;
		if (push)
			ft_putendl("sa");
	}
}

void	sb(t_pose **stack, int push)
{
	t_pose	*temp;
	t_pose	*nextmp;

	if (!*stack)
		return ;
	if ((*stack)->next != NULL)
	{
		temp = *stack;
		nextmp = (*stack)->next;
		temp->previous = nextmp;
		temp->next = nextmp->next;
		nextmp->previous = NULL;
		nextmp->next = temp;
		*stack = nextmp;
		if (push)
			ft_putendl("sb");
	}
}

void	ss(t_pose **stack_a, t_pose **stack_b, int push)
{
	sa(stack_a, 0);
	sb(stack_b, 0);
	if (push)
		ft_putendl("ss");
}

void	pa(t_pose **stack_a, t_pose **stack_b, int push)
{
	t_pose	*temp;

	if (!*stack_b)
		return ;
	if (stack_b != NULL)
	{
		temp = *stack_b;
		if ((*stack_b)->next)
			*stack_b = (*stack_b)->next;
		else
			*stack_b = NULL;
		if (*stack_b)
			(*stack_b)->previous = NULL;
		if (stack_a == NULL)
			head_time(stack_a, temp);
		else if (stack_a != NULL)
			head_time(stack_a, temp);
		if (push)
			ft_putendl("pa");
	}
}

void	pb(t_pose **stack_b, t_pose **stack_a, int push)
{
	t_pose	*temp;

	if (!*stack_a)
		return ;
	if (stack_a != NULL)
	{
		temp = *stack_a;
		if ((*stack_a)->next)
			*stack_a = (*stack_a)->next;
		else
			*stack_a = NULL;
		if (*stack_a)
			(*stack_a)->previous = NULL;
		if (stack_b == NULL)
			head_time(stack_b, temp);
		else if (stack_b != NULL)
			head_time(stack_b, temp);
		if (push)
			ft_putendl("pb");
	}
}
