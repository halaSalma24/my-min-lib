/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:58:18 by slakhrou          #+#    #+#             */
/*   Updated: 2024/11/18 18:36:42 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t	len)
{
	unsigned char	*p;
	unsigned char	*q;

	p = (unsigned char *)dst;
	q = (unsigned char *)src;
	if (dst == src)
		return (dst);
	if (len == 0)
		return (dst);
	if (dst < src)
	{
		while (len--)
			*(p++) = *(q++);
	}
	else
	{
		p = p + len;
		q = q + len;
		while (len--)
			*(--p) = *(--q);
	}
	return (dst);
}
