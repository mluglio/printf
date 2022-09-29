/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluglio- < mluglio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:57:31 by mluglio-          #+#    #+#             */
/*   Updated: 2022/06/24 14:40:17 by mluglio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_str_size(const char *s, size_t *i, char c)
{
	int	index;

	index = 0;
	while (s[*i] == c && s[*i])
		*i = *i + 1;
	index = *i;
	while (s[*i] != c && s[*i])
		*i = *i + 1;
	return (index);
}

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
		{
			while (*s == c && *s)
				s++;
		}
		if (*s != c && *s)
		{
			while (*s != c && *s)
				s++;
			count++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	size;
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	size = ft_count_words(s, c);
	str = (char **)ft_calloc (size + 1, sizeof(char *));
	while (j < size)
	{
		start = ft_str_size(s, &i, c);
		str[j] = ft_substr(s, start, i - start);
		j++;
	}
	str[j] = 0;
	return (str);
}
