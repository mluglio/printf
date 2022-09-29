/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluglio- < mluglio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 04:06:40 by mluglio-          #+#    #+#             */
/*   Updated: 2022/06/25 23:48:58 by mluglio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	il;

	il = 0;
	if (!little[il])
		return ((char *)big);
	while (*big && len)
	{
		if (*big == *little)
		{
			while (little[il] != '\0')
			{
				if (big[il] != little[il])
				{
					il = 0;
					break ;
				}
				il++;
			}
			if (little[il] == '\0' && il <= len)
				return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}
