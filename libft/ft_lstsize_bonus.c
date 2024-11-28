/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:31:30 by slakhrou          #+#    #+#             */
/*   Updated: 2024/11/05 17:29:10 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list	*lst)
{
	t_list	*ptr;
	int		len;

	ptr = lst;
	len = 0;
	while (ptr)
	{
		len++;
		ptr = ptr ->next;
	}
	return (len);
}
