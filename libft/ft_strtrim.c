/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:21:46 by slakhrou          #+#    #+#             */
/*   Updated: 2024/11/22 22:23:34 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_foundset(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	new_len(char const	*s1, char const	*set, size_t *start
					, size_t	*end)
{
	size_t	start_pos;
	size_t	end_pos;
	size_t	len;

	start_pos = 0;
	end_pos = ft_strlen(s1);
	while (start_pos < end_pos && ft_foundset(s1[start_pos], set))
		start_pos++;
	while (end_pos > start_pos && ft_foundset(s1[end_pos - 1], set))
		end_pos--;
	*start = start_pos;
	*end = end_pos;
	len = end_pos - start_pos;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str ;
	size_t	i;
	size_t	len;
	size_t	start_pos;
	size_t	end_pos;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	len = new_len(s1, set, &start_pos, &end_pos);
	str = (char *) malloc ((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (start_pos < end_pos)
	{
		str[i] = s1[start_pos];
		i++;
		start_pos++;
	}
	str[i] = '\0';
	return (str);
}
