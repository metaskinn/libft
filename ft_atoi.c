/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metaskin <metaskin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 12:13:23 by metaskin          #+#    #+#             */
/*   Updated: 2026/01/19 14:55:04 by metaskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	result;
	int		sign;
	int		idx;

	result = 0;
	sign = 1;
	idx = 0;
	while ((str[idx] >= 9 && str[idx] <= 13) || str[idx] == 32)
		idx++;
	if (str[idx] == '-' || str[idx] == '+')
	{
		if (str[idx] == '-')
			sign = -1;
		idx++;
	}
	while (str[idx] >= '0' && str[idx] <= '9')
	{
		result = result * 10 + (str[idx] - '0');
		idx++;
	}
	return ((int)(result * sign));
}
