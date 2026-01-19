/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metaskin <metaskin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 12:14:04 by metaskin          #+#    #+#             */
/*   Updated: 2026/01/19 14:56:17 by metaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*byte_ptr;

	byte_ptr = (unsigned char *)b;
	while (n--)
		*(byte_ptr++) = (unsigned char)c;
	return (b);
}
