/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:38:27 by slakhrou          #+#    #+#             */
/*   Updated: 2024/11/17 20:10:22 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list	**lst, t_list	*new)
{
	t_list	*ptr;

	if (!lst || !new)
		return ;
	ptr = *lst;
	if (!*lst)
	{
		*lst = new;
		new -> next = NULL;
		return ;
	}
	while (ptr -> next)
	{
		ptr = ptr-> next;
	}
	ptr -> next = new;
	new -> next = NULL;
}
