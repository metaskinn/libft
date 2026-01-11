/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metaskin <metaskin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 00:48:20 by metaskin          #+#    #+#             */
/*   Updated: 2026/01/11 20:11:14 by metaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

static size_t	wcount(char const *s, char c)
{
	size_t	n;

	n = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			n++;
		while (*s && *s != c)
			s++;
	}
	return (n);
}

static char	**freee(char **a, size_t i)
{
	while (i)
		free(a[--i]);
	free(a);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char		**a;
	size_t		i;
	char const	*st;

	if (!s)
		return (NULL);
	a = ft_calloc(wcount(s, c) + 1, sizeof(*a));
	if (!a)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		st = s;
		while (*s && *s != c)
			s++;
		if (s > st)
		{
			a[i] = ft_substr(st, 0, (size_t)(s - st));
			if (!a[i++])
				return (freee(a, i - 1));
		}
	}
	return (a);
}
