/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metaskin <metaskin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 12:13:59 by metaskin          #+#    #+#             */
/*   Updated: 2026/01/13 01:49:38 by metaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_bytes;
	unsigned char	*src_bytes;
	size_t			idx;

	if (!dst && !src)
		return ((void *)0);
	dst_bytes = (unsigned char *)dst;
	src_bytes = (unsigned char *)src;
	idx = 0;
	while (n--)
	{
		dst_bytes[idx] = src_bytes[idx];
		idx++;
	}
	return (dst);
}
