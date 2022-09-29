/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluglio- < mluglio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 01:27:04 by mluglio-          #+#    #+#             */
/*   Updated: 2022/06/24 14:21:08 by mluglio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbrlen(int nbr)
{
	size_t	len;

	len = 1;
	if (nbr < 0)
		len++;
	nbr = nbr / 10;
	while (nbr)
	{
		nbr = nbr / 10;
			len++;
	}
	return (len);
}

static char	*convert_itoa(char *str,
							size_t size,
							unsigned int num,
							unsigned int is_negative)
{
	str[size] = '\0';
	while (size--)
	{
		str[size] = (num % 10) + 48;
		num /= 10;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	size_t			n_digits;
	unsigned int	is_negative;
	char			*str;

	n_digits = ft_nbrlen(n);
	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	str = malloc(sizeof(char) * (n_digits + 1));
	if (str == NULL)
		return (NULL);
	return (convert_itoa(str, n_digits, (unsigned int)n, is_negative));
}	
