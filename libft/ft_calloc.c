/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:40:43 by slakhrou          #+#    #+#             */
/*   Updated: 2024/11/20 23:34:21 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	count, size_t	size)
{
	void	*p;
	size_t	i;
	char	*s;

	if (count != 0 && size > SIZE_MAX / count)
		return (NULL);
	if (count == 0 || size == 0)
		return (malloc(1));
	p = malloc(count * size);
	if (p == NULL)
		return (NULL);
	i = 0;
	s = (char *) p;
	while (i < count * size)
	{
		s[i] = 0;
		i++;
	}
	return (p);
}
