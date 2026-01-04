/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metaskin <metaskin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 12:14:25 by metaskin          #+#    #+#             */
/*   Updated: 2026/01/04 17:46:28 by metaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	if (haystack == NULL && len == 0)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	h = 0;
	while (haystack[h] && h < len)
	{
		n = 0;
		while (haystack[h + n] && haystack[h + n] == needle[n]
			&& h + n < len && needle[n])
			n++;
		if (!needle[n])
			return ((char *)&haystack[h]);
		h++;
	}
	return (NULL);
}
