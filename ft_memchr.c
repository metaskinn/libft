/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metaskin <metaskin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 12:13:55 by metaskin          #+#    #+#             */
/*   Updated: 2026/01/13 01:47:47 by metaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*mem_ptr;
	unsigned char		target_char;
	size_t				idx;

	mem_ptr = (const unsigned char *)s;
	target_char = (unsigned char)c;
	idx = 0;
	while (n--)
	{
		if (mem_ptr[idx] == target_char)
			return ((void *)&mem_ptr[idx]);
		idx++;
	}
	return (0);
}
