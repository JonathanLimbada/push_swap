/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 10:58:57 by jlimbada          #+#    #+#             */
/*   Updated: 2019/07/17 09:02:21 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isnum(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 48 && str[i] <= 57) || str[i] == 45))
			return (0);
		i++;
	}
	return (1);
}
