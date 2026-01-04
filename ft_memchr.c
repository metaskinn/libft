/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metaskin <metaskin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 12:13:55 by metaskin          #+#    #+#             */
/*   Updated: 2025/12/31 12:13:56 by metaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		staff;
	size_t				i;

	p = (const unsigned char *)s;
	staff = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == staff)
			return ((void *)(p + i));
		i++;
	}
	return (0);
}
