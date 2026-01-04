/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metaskin <metaskin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 12:12:42 by metaskin          #+#    #+#             */
/*   Updated: 2025/12/31 12:13:05 by metaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pp;
	size_t	total;

	if (size != 0 && count > ((size_t)-1) / size)
		return (0);
	total = count * size;
	pp = (void *)malloc(total);
	if (!pp)
		return (0);
	ft_bzero(pp, total);
	return (pp);
}
