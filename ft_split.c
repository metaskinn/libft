/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metaskin <metaskin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 00:48:20 by metaskin          #+#    #+#             */
/*   Updated: 2026/01/13 02:03:44 by metaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_tokens(char const *str, char delim)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		while (*str && *str == delim)
			str++;
		if (*str)
			count++;
		while (*str && *str != delim)
			str++;
	}
	return (count);
}

static char	**free_split(char **tokens, size_t used)
{
	while (used)
		free(tokens[--used]);
	free(tokens);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char		**tokens;
	size_t		tok_idx;
	char const	*tok_st;

	if (!s)
		return (NULL);
	tokens = ft_calloc(count_tokens(s, c) + 1, sizeof(*tokens));
	if (!tokens)
		return (NULL);
	tok_idx = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		tok_st = s;
		while (*s && *s != c)
			s++;
		if (s > tok_st)
		{
			tokens[tok_idx] = ft_substr(tok_st, 0, (size_t)(s - tok_st));
			if (!tokens[tok_idx++])
				return (free_split(tokens, tok_idx - 1));
		}
	}
	return (tokens);
}
