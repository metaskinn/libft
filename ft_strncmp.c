/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metaskin <metaskin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 12:14:23 by metaskin          #+#    #+#             */
/*   Updated: 2026/01/13 02:09:51 by metaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			idx;
	unsigned char	s1_char;
	unsigned char	s2_char;

	idx = 0;
	while (idx < n && (s1[idx] || s2[idx]))
	{
		s1_char = (unsigned char)s1[idx];
		s2_char = (unsigned char)s2[idx];
		if (s1_char != s2_char)
			return ((int)(s1_char - s2_char));
		idx++;
	}
	return (0);
}
