/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:02:25 by slakhrou          #+#    #+#             */
/*   Updated: 2024/11/17 20:12:45 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list	*lst)
{
	t_list	*ptr;

	if (!lst)
		return (NULL);
	ptr = lst;
	while (ptr -> next)
	{
		ptr = ptr -> next;
	}
	return (ptr);
}
