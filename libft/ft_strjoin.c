/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:12:09 by slakhrou          #+#    #+#             */
/*   Updated: 2024/11/20 23:37:09 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*s1_cats2(char const	*s1, char const	*s2, char	*str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		str[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[j] = s2[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}

char	*ft_strjoin(char const *s1, char const	*s2)
{
	char	*str_f;
	size_t	total_len;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	total_len = ft_strlen(s1) + ft_strlen(s2);
	if (((unsigned long)(total_len + 1)) > SIZE_MAX)
		return (NULL);
	str_f = (char *) malloc ((total_len + 1) * sizeof (char));
	if (!str_f)
		return (NULL);
	return (s1_cats2(s1, s2, str_f));
}
