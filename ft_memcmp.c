/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metaskin <metaskin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 12:13:57 by metaskin          #+#    #+#             */
/*   Updated: 2026/01/04 17:20:42 by metaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	j;

	if (n == 0)
		return (0);
	j = 0;
	while (j < n)
	{
		if (((unsigned char *)s1)[j] != (((unsigned char *)s2)[j]))
			return (((unsigned char *)s1)[j] - (((unsigned char *)s2)[j]));
		j++;
	}
	return (0);
}
