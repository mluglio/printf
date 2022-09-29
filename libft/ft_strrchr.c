/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluglio- < mluglio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 00:39:32 by mluglio-          #+#    #+#             */
/*   Updated: 2022/06/24 15:02:59 by mluglio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*adress;
	int		i;
	char	c1;
	char	*str;

	adress = NULL;
	i = 0;
	c1 = ((char)c);
	str = (char *)s;
	while (str[i] != 0)
	{
		if (str[i] == c1)
		{
			adress = &str[i];
		}
	i++;
	}
	if (c1 == 0)
	{
		return (&str[i]);
	}
	return (adress);
}
