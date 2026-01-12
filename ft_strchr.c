/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metaskin <metaskin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 12:14:07 by metaskin          #+#    #+#             */
/*   Updated: 2026/01/13 02:04:23 by metaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	target_char;

	target_char = (unsigned char)c;
	while (*s)
	{
		if ((unsigned char)*s == target_char)
			return ((char *)s);
		s++;
	}
	if (target_char == '\0')
		return ((char *)s);
	return (0);
}
