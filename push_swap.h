/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:12:02 by jlimbada          #+#    #+#             */
/*   Updated: 2019/07/26 10:17:16 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct		s_struct
{
	int				value;
	struct s_struct	*next;
	struct s_struct	*previous;
}					t_pose;

void	free_time(char **argv);
void	big_oof(int argc, char **argv);
void	oof(void);
void	y33t(int argc, char **argv);
void	doppel(int argc, char **argv);
void	big_twoof(int argc, char **argv);
void	y22t(int argc, char **argv);
void	d2pp2l(int argc, char **argv);
void	is_lit(int count, int argc, char **argv);
t_pose	*split_time(int argc, char **argv);
int		arg_size(char **arg);
t_pose	*listint(int count, int argc, char **argv);
t_pose	*head_time(int value);
void	tail_time(t_pose **head, t_pose *node);
void	print_stack(t_pose **head, char stack_id);

#endif
