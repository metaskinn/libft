/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metaskin <metaskin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 12:14:25 by metaskin          #+#    #+#             */
/*   Updated: 2026/01/19 14:57:00 by metaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h_idx;
	size_t	n_idx;

	if (haystack == NULL && len == 0)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	h_idx = 0;
	while (haystack[h_idx] && h_idx < len)
	{
		n_idx = 0;
		while (h_idx + n_idx < len && needle[n_idx] && haystack[h_idx + n_idx]
			&& haystack[h_idx + n_idx] == needle[n_idx])
			n_idx++;
		if (!needle[n_idx])
			return ((char *)&haystack[h_idx]);
		h_idx++;
	}
	return (NULL);
}
