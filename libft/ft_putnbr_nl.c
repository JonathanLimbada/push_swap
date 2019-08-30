/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_nl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <jlimbada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 10:43:23 by jlimbada          #+#    #+#             */
/*   Updated: 2019/08/30 11:03:06 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Outputs the integer n to the standard output followed by a newline.
*/

void	ft_putnbr_nl(int n)
{
	long	e;

	e = (long)n;
	if (n < 0)
	{
		ft_putchar('-');
		e = e * -1;
	}
	if (e >= 10)
	{
		ft_putnbr(e / 10);
		ft_putchar(e % 10 + '0');
	}
	else
		ft_putchar(e + '0');
    ft_putendl("");
}
