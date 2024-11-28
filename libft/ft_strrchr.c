/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:27:22 by slakhrou          #+#    #+#             */
/*   Updated: 2024/11/22 20:11:39 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = (char *) s;
	while (*p)
		p++;
	if (c == '\0')
		return (p);
	while (p >= (char *)s)
	{
		if (*p == (char)c)
			return (p);
		p--;
	}
	return (NULL);
}
