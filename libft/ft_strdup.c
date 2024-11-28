/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 20:02:25 by slakhrou          #+#    #+#             */
/*   Updated: 2024/11/13 21:34:31 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	char	*copy;
	int		i;
	size_t	s1_len;

	i = 0;
	s1_len = ft_strlen(s1);
	copy = (char *) malloc ((s1_len + 1) * sizeof (char));
	if (copy == NULL)
		return (NULL);
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
