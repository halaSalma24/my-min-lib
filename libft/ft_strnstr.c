/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:08:00 by slakhrou          #+#    #+#             */
/*   Updated: 2024/11/22 19:38:31 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*str, const char	*substr, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*substr == '\0')
		return ((char *)str);
	while (i < len && str[i])
	{
		if (str[i] == substr[0])
		{
			j = 0;
			while (substr[j] && (i + j) < len && str[i + j] == substr[j])
				j++;
			if (substr[j] == '\0')
				return ((char *) &str[i]);
		}
		i++;
	}
	return (NULL);
}
