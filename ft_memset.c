/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metaskin <metaskin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 12:14:04 by metaskin          #+#    #+#             */
/*   Updated: 2026/01/11 20:11:03 by metaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*mem;

	mem = (unsigned char *)b;
	while (n--)
	{
		*(mem++) = (unsigned char)c;
	}
	return (b);
}
