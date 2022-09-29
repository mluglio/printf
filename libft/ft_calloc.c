/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluglio- < mluglio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 13:39:01 by mluglio-          #+#    #+#             */
/*   Updated: 2022/06/24 14:15:37 by mluglio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*p;
	unsigned char	*aux;
	size_t			i;

	i = 0;
	if (nmemb == __SIZE_MAX__ || size == __SIZE_MAX__)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	aux = (unsigned char *)p;
	while (i < nmemb * size)
	{
		aux[i] = '\0';
		i++;
	}
	return (p);
}
