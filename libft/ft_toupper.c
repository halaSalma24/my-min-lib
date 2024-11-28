/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:28:22 by slakhrou          #+#    #+#             */
/*   Updated: 2024/11/22 18:26:31 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	uc;

	uc = (unsigned char ) c;
	if (uc >= 'a' && uc <= 'z')
		return (uc - 32);
	return (c);
}
