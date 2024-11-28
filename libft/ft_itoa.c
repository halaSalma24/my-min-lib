/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:19:45 by slakhrou          #+#    #+#             */
/*   Updated: 2024/11/20 21:27:55 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_str(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*ft_copy(char *str, long n, int len)
{
	unsigned long	nb;

	if (n < 0)
	{
		nb = -n;
		str[0] = '-';
	}
	else
	{
		nb = n;
	}
	str[len] = '\0';
	while (len > 0 && nb != 0)
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*number;
	int		len;
	long	nb;

	nb = (long)n;
	if (n == 0)
	{
		number = (char *)malloc(2 * sizeof(char));
		if (!number)
			return (NULL);
		number[0] = '0';
		number[1] = '\0';
		return (number);
	}
	len = len_str(nb);
	number = (char *)malloc((len + 1) * sizeof(char));
	if (!number)
		return (NULL);
	return (ft_copy(number, nb, len));
}
