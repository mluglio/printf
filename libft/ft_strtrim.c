/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluglio- < mluglio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:49:38 by mluglio-          #+#    #+#             */
/*   Updated: 2022/06/24 15:04:37 by mluglio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		size_s;
	char		*trim;

	if (s1 && set)
	{
		while (*s1 && ft_strchr(set, *s1))
			s1++;
		size_s = ft_strlen(s1);
		while (size_s && ft_strchr(set, s1[size_s]))
			size_s--;
		trim = ft_substr((char *)s1, 0, size_s + 1);
		return (trim);
	}
	return (NULL);
}
