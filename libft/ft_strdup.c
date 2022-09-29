/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluglio- < mluglio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 02:31:42 by mluglio-          #+#    #+#             */
/*   Updated: 2022/06/15 04:19:59 by mluglio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ns;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	ns = (char *)malloc(sizeof(char) * ft_strlen(s) +1);
	if (!ns)
		return (NULL);
	while (*s)
	{
		ns[i] = *s++;
		i++;
	}
	ns[i] = '\0';
	return (ns);
}
