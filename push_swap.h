/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:12:02 by jlimbada          #+#    #+#             */
/*   Updated: 2019/08/22 15:28:11 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

# define FFREE_OOF {free(args); free_time(argv); oof();}
# define FREE_OOF {free(args); oof();}

typedef struct		s_struct
{
	int				value;
	int				sort_val;
	struct s_struct	*next;
	struct s_struct	*previous;
}					t_pose;

void	free_time(char **argv);
void	min_max(int argc, char **argv);
void	oof(void);
void	is_num(int argc, char **argv);
void	doubles(int argc, char **argv);
void	min_max2(int argc, char **argv);
void	split_num(int argc, char **argv);
void	doubles2(int argc, char **argv);
void	errors(int count, int argc, char **argv);
void	do_programs(t_pose **stacka, t_pose **stackb, char *str);
void	do_pushswap(t_pose **stacka, t_pose **stackb, int len);
t_pose	*split_time(int argc, char **argv);
int		arg_size(char **arg);
int		list_len(t_pose **stack);
int		smallest(t_pose **stack);
void	sorting_value(t_pose **stack);
void	rotate_time(t_pose **stack, int p, int len);
t_pose	*listint(int count, int argc, char **argv);
t_pose	*makelist(int value);
void	head_time(t_pose **head, t_pose *node);
void	tail_time(t_pose **head, t_pose *node);
void	print_stack(t_pose **head, char stack_id);
void	read_time(t_pose **stacka, t_pose **stackb);
void	freestack(t_pose **stack);
int		checks(t_pose **stacka);
int		is_command(char *str);
void	two(t_pose **stacka);
void	three(t_pose **stacka);
void	five(t_pose **stacka, t_pose **stackb, int len);
void	twenty(t_pose **stacka, t_pose **stackb, int len);
void	ra(t_pose **stack, int push);
void	rb(t_pose **stack, int push);
void	rr(t_pose **stacka, t_pose **stackb, int push);
void	sa(t_pose **stack, int push);
void	sb(t_pose **stack, int push);
void	ss(t_pose **stack_a, t_pose **stack_b, int push);
void	pa(t_pose **stack_a, t_pose **stack_b, int push);
void	pb(t_pose **stack_a, t_pose **stack_b, int push);
void	rra(t_pose **stack, int push);
void	rrb(t_pose **stack, int push);
void	rrr(t_pose **stacka, t_pose **stackb, int push);

#endif
