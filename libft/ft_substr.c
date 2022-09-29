/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluglio- < mluglio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:06:13 by mluglio-          #+#    #+#             */
/*   Updated: 2022/06/24 15:07:03 by mluglio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_min(int len, int start)
{
	if (len < start)
		return (len);
	return (start);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;
	size_t	max;

	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start < slen)
		max = ft_min(ft_strlen(s + start), len);
	else
		return (ft_strdup(""));
	substr = malloc(max + 1 * sizeof(char));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, &s[start], max + 1);
	return (substr);
}
