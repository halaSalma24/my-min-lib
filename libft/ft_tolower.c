/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:27:53 by slakhrou          #+#    #+#             */
/*   Updated: 2024/11/22 18:24:47 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char	uc;

	uc = (unsigned char ) c;
	if (uc >= 'A' && uc <= 'Z')
		return (uc + 32);
	return (c);
}
