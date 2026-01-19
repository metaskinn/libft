/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metaskin <metaskin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 00:07:57 by metaskin          #+#    #+#             */
/*   Updated: 2026/01/19 14:55:28 by metaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit_count(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	long	value;

	value = n;
	len = ft_digit_count(n);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (value < 0)
	{
		result[0] = '-';
		value = -value;
	}
	if (value == 0)
		result[0] = '0';
	while (value > 0)
	{
		result[--len] = (value % 10) + '0';
		value /= 10;
	}
	return (result);
}
