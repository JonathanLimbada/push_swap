/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimbada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 13:51:34 by jlimbada          #+#    #+#             */
/*   Updated: 2019/06/21 14:46:40 by jlimbada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	size_t	i;
	char	*prt;
	int		the_good_size;

	i = 0;
	the_good_size = sizeof(char);
	prt = (char *)malloc(n + 1 * the_good_size);
	if (prt == NULL)
		return (NULL);
	while (i < n)
	{
		prt[i] = s1[i];
		i++;
	}
	prt[i] = '\0';
	return (prt);
}
