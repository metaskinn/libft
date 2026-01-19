/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metaskin <metaskin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 19:19:28 by metaskin          #+#    #+#             */
/*   Updated: 2026/01/19 14:57:13 by metaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	src_len;
	size_t	sub_len;
	char	*sub;

	if (!s)
		return (NULL);
	src_len = ft_strlen(s);
	if (start >= src_len)
		return (ft_strdup(""));
	sub_len = src_len - start;
	if (len < sub_len)
		sub_len = len;
	sub = (char *)malloc(sub_len + 1);
	if (!sub)
		return (NULL);
	ft_memcpy(sub, s + start, sub_len);
	sub[sub_len] = '\0';
	return (sub);
}
