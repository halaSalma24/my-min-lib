/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:43:38 by slakhrou          #+#    #+#             */
/*   Updated: 2024/11/10 20:26:11 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void	*s1, const void	*s2, size_t	n)
{
	unsigned char	*p;
	unsigned char	*q;

	p = (unsigned char *) s1;
	q = (unsigned char *) s2;
	if (!n)
		return (0);
	while (n > 0)
	{
		if (*p != *q)
			return (*p - *q);
		p++;
		q++;
		n--;
	}
	return (0);
}
