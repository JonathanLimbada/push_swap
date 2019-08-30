/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <jlimbada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 08:34:05 by jlimbada          #+#    #+#             */
/*   Updated: 2019/08/30 10:25:13 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_count	*count_time(void)
{
	t_count *count;

	if (!(count = (t_count*)malloc(sizeof(t_count))))
		return (NULL);
	count->pa = 0;
	count->pb = 0;
	count->sa = 0;
	count->sb = 0;
	count->ss = 0;
	count->ra = 0;
	count->rb = 0;
	count->rr = 0;
	count->rra = 0;
	count->rrb = 0;
	count->rrr = 0;
	return (count);
}

int		flag_count(int ac, char **av)
{
	int	i;
	int	l;

	i = 1;
	l = 1;
	while (i < ac)
	{
		if (ft_strequ(av[i], "-c"))
			l += 1;
		if (ft_strequ(av[i], "-v"))
			l += 1;
		if (ft_strequ(av[i], "-m"))
			l += 1;
		i++;
	}
	return (l);
}

int		valid_flag(char *av)
{
	if (*av == '-' && (!(av[1] >= '0' && av[1] <= '9')) && !(av[1] == '-'))
		return (1);
	return (0);
}

void	flag_check(int *argc, char ***argv, t_flags *flags)
{
	while (*argc > 0 && valid_flag(**argv))
	{
		if (*argc == 0)
			return ;
		**argv += 1;
		if (***argv == 'v')
		{
			NFS_SHIFT;
			flags->v = 1;
		}
		else if (***argv == 'm')
		{
			NFS_SHIFT;
			flags->m = 1;
		}
		else if (***argv == 'c')
		{
			NFS_SHIFT;
			flags->c = 1;
		}
		else
			oof(4);
	}
}
