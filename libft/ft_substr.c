/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:45:01 by slakhrou          #+#    #+#             */
/*   Updated: 2024/11/19 15:40:22 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_allocate_empty(void)
{
	char	*empty_str;

	empty_str = (char *) malloc (sizeof (char));
	if (!empty_str)
		return (NULL);
	empty_str[0] = '\0';
	return (empty_str);
}

char	*ft_substr(char const	*s, unsigned int start, size_t	len)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_allocate_empty());
	if (ft_strlen(s) <= start + len)
		str = (char *) malloc ((ft_strlen(s) - start + 1) * sizeof (char));
	else
		str = (char *) malloc ((len + 1) * sizeof (char));
	if (str == NULL)
		return (NULL);
	while (j < len && s[i])
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
