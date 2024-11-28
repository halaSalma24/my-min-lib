/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:36:07 by slakhrou          #+#    #+#             */
/*   Updated: 2024/11/18 18:37:28 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void	*src, size_t	n)
{
	unsigned char	*p;
	unsigned char	*q;

	p = (unsigned char *)dst;
	q = (unsigned char *)src;
	if (dst == src)
		return (dst);
	while (n > 0)
	{
		*p = *q;
		p++;
		q++;
		n--;
	}
	return (dst);
}
