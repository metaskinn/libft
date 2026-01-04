/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metaskin <metaskin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 12:14:27 by metaskin          #+#    #+#             */
/*   Updated: 2025/12/31 12:14:28 by metaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	staff;
	size_t			i;

	staff = (unsigned char)c;
	i = 0;
	while (s[i])
		i++;
	while (1)
	{
		if ((char)s[i] == staff)
			return ((char *)(&s[i]));
		if (i == 0)
			break ;
		i--;
	}
	return (0);
}
