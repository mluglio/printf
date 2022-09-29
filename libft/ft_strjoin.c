/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluglio- < mluglio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:56:42 by mluglio-          #+#    #+#             */
/*   Updated: 2022/06/24 14:44:17 by mluglio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	char	*concat;

	str1 = ((char *)s1);
	str2 = ((char *)s2);
	if (s1 && s2)
	{
		concat = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		ft_strlcpy(concat, str1, ft_strlen(s1) + 1);
		ft_strlcat(concat, str2, ft_strlen(s1) + ft_strlen(s2) + 1);
		return (concat);
	}
	return (NULL);
}
