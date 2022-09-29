/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluglio- < mluglio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 00:33:14 by mluglio-          #+#    #+#             */
/*   Updated: 2022/06/24 14:45:38 by mluglio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	i = 0;
	destlen = 0;
	while (dst[destlen] && destlen < size)
	{
		destlen++;
	}
	if (destlen < size)
	{	
		while (src[i] && i + destlen + 1 < size)
		{
			dst[destlen + i] = src[i];
			i++;
		}
		dst[destlen + i] = '\0';
	}
	return (destlen + srclen);
}
