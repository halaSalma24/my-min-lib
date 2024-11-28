/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:16:49 by slakhrou          #+#    #+#             */
/*   Updated: 2024/11/22 18:21:55 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	if ((uc >= 'A' && uc <= 'Z') || (uc >= 'a' && uc <= 'z'))
		return (1);
	return (0);
}
