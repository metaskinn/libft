/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metaskin <metaskin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 12:14:01 by metaskin          #+#    #+#             */
/*   Updated: 2026/01/13 01:50:35 by metaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_bytes;
	const unsigned char	*src_bytes;

	if (!dst && !src)
		return ((void *)0);
	if (dst == src || len == 0)
		return (dst);
	dst_bytes = (unsigned char *)dst;
	src_bytes = (const unsigned char *)src;
	if (dst_bytes < src_bytes)
		ft_memcpy(dst_bytes, src_bytes, len);
	else
	{
		while (len--)
			dst_bytes[len] = src_bytes[len];
	}
	return (dst);
}
