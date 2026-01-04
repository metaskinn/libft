/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metaskin <metaskin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 12:14:07 by metaskin          #+#    #+#             */
/*   Updated: 2025/12/31 12:14:08 by metaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	staff;

	staff = (unsigned char)c;
	while (*s)
	{
		if ((unsigned char)*s == staff)
			return ((char *)s);
		s++;
	}
	if (staff == '\0')
		return ((char *)s);
	return (0);
}
