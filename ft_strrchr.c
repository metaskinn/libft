/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metaskin <metaskin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 12:14:27 by metaskin          #+#    #+#             */
/*   Updated: 2026/01/13 02:14:24 by metaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	target_char;
	size_t			idx;

	target_char = (unsigned char)c;
	idx = 0;
	while (s[idx])
		idx++;
	while (1)
	{
		if ((unsigned char)s[idx] == target_char)
			return ((char *)(&s[idx]));
		if (idx == 0)
			break ;
		idx--;
	}
	return (NULL);
}
