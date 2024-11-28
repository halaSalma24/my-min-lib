/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:34:59 by slakhrou          #+#    #+#             */
/*   Updated: 2024/11/17 20:10:45 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*help;

	if (!lst || !del || !*lst)
		return ;
	ptr = *lst;
	while (ptr)
	{
		help = ptr -> next;
		del(ptr -> content);
		free(ptr);
		ptr = help;
	}
	*lst = NULL;
}
