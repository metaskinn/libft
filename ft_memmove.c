/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metaskin <metaskin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 12:14:01 by metaskin          #+#    #+#             */
/*   Updated: 2025/12/31 12:20:55 by metaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dd;
	const unsigned char	*ss;

	if (!dst && !src)
		return (NULL);
	if (dst == src || len == 0)
		return (dst);
	dd = (unsigned char *)dst;
	ss = (const unsigned char *)src;
	if (dd < ss)
		ft_memcpy(dd, ss, len);
	else
	{
		while (len--)
			dd[len] = ss[len];
	}
	return (dst);
}
