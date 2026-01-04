/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metaskin <metaskin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 12:12:42 by metaskin          #+#    #+#             */
/*   Updated: 2026/01/04 18:47:06 by metaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pp;
	size_t	total;

	total = count * size;
	pp = malloc(total);
	if (!pp)
		return (0);
	ft_bzero(pp, total);
	return (pp);
}
