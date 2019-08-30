/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <jlimbada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:12:02 by jlimbada          #+#    #+#             */
/*   Updated: 2019/08/30 10:58:37 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

# define CLEAR {ft_putstr("\033[H\033[J");}
# define FREE_AV_OOF {free(args); free_time(argv); oof(2);}
# define FREE_OOF {free(args); oof(2);}
# define SHIFT {argc -= 1; argv += 1;}
# define NFS_SHIFT {*argc -= 1; *argv += 1;}
# define FREE_REAL_ESTATE {freestack(&stack_a); freestack(&stack_b);}
# define FREEMOOR {freestack(stacka); freestack(stackb); free(str); oof(0);}
# define MOVES {ft_putstr("Moves: "); ft_putnbr(moves); ft_putendl("");}
# define SHOW {CLEAR; print_stack(stacka, 'A');	print_stack(stackb, 'B');}
# define COUNT {print_count(count);}

typedef struct		s_struct
{
	int				value;
	int				sort_val;
	struct s_struct	*next;
	struct s_struct	*previous;
}					t_pose;

typedef struct		s_flags
{
	char			m : 1;
	char			v : 1;
	char			c : 1;
}					t_flags;

typedef struct		s_count
{
	int				pa;
	int				pb;
	int				sa;
	int				sb;
	int				ss;
	int				ra;
	int				rb;
	int				rr;
	int				rra;
	int				rrb;
	int				rrr;
}					t_count;

void				free_time(char **argv);
void				oof(int i);
void				min_max2(int argc, char **argv, int check);
void				split_num(int argc, char **argv, int check);
void				doubles2(int argc, char **argv, int check);
void				errors(int count, char **argv, int check);
void				do_programs(t_pose **stacka, t_pose **stackb, char *str,\
															t_count *count);
void				do_pushswap(t_pose **stacka, t_pose **stackb, int len);
t_pose				*split_time(char **argv);
int					arg_size(char **arg);
int					list_len(t_pose **stack);
int					smallest(t_pose **stack);
int					biggest(t_pose **stack);
int					has_space(char *nums);
void				sorting_value(t_pose **stack);
void				rotate_time(t_pose **stack, int p, int len);
void				rotate_timeb(t_pose **stack, int p, int len);
int					position(t_pose **stack, int p);
int					flag_count(int ac, char **av);
void				pa_time(t_pose **stacka, t_pose **stackb, int len);
t_pose				*listint(int argc, char **argv);
t_pose				*makelist(int value);
void				head_time(t_pose **head, t_pose *node);
void				tail_time(t_pose **head, t_pose *node);
void				print_stack(t_pose **head, char stack_id);
void				read_time(t_pose **stacka, t_pose **stackb, t_flags flags);
void				freestack(t_pose **stack);
int					checks(t_pose **stacka);
int					is_command(char *str);
void				two(t_pose **stacka);
void				three(t_pose **stacka);
void				five(t_pose **stacka, t_pose **stackb, int len);
void				twenty(t_pose **stacka, t_pose **stackb, int len);
void				fifty(t_pose **stacka, t_pose **stackb, int len);
void				hundred(t_pose **stacka, t_pose **stackb, int len);
void				twofifty(t_pose **stacka, t_pose **stackb, int len);
void				five_hundred(t_pose **stacka, t_pose **stackb, int len);
void				sort_time(t_pose **stacka, t_pose **stackb, int len);
void				ra(t_pose **stack, int push);
void				rb(t_pose **stack, int push);
void				rr(t_pose **stacka, t_pose **stackb, int push);
void				sa(t_pose **stack, int push);
void				sb(t_pose **stack, int push);
void				ss(t_pose **stack_a, t_pose **stack_b, int push);
void				pa(t_pose **stack_a, t_pose **stack_b, int push);
void				pb(t_pose **stack_a, t_pose **stack_b, int push);
void				rra(t_pose **stack, int push);
void				rrb(t_pose **stack, int push);
void				rrr(t_pose **stacka, t_pose **stackb, int push);

void				flag_check(int *argc, char ***argv, t_flags *flags);
int					valid_flag(char *av);
t_count				*count_time(void);
void				count_me(char *str, t_count *count);
void				print_count(t_count *count);
void				free_count(t_count **count);

#endif
