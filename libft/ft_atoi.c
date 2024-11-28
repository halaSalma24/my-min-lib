/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:22:25 by slakhrou          #+#    #+#             */
/*   Updated: 2024/11/24 19:41:24 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	over_long(long number, char c, int sign)
{
	if (number >= (LONG_MAX - (c - '0')) / 10)
	{
		if (sign == 1)
			return (-1);
		else
			return (0);
	}
	return (1);
}

int	ft_atoi(const char	*str)
{
	int		i;
	int		sign;
	long	number;
	int		over_check;

	i = 0;
	sign = 1;
	number = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r')))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		over_check = over_long(number, str[i], sign);
		if (over_check != 1)
			return (over_check);
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return (number * sign);
}
