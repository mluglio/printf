/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluglio- < mluglio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 00:29:29 by mluglio-          #+#    #+#             */
/*   Updated: 2022/06/24 14:42:58 by mluglio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	char			*str;
	unsigned char	c1;

	i = 0;
	str = (char *)s;
	c1 = ((unsigned char)c);
	while (str[i] != c1)
	{
		if (str[i] == '\0')
		{
			return (NULL);
		}
	i++;
	}
	return (str + i);
}
