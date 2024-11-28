/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:37:03 by slakhrou          #+#    #+#             */
/*   Updated: 2024/11/17 20:13:18 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*content;
	t_list	*newlist;
	t_list	*newnode;

	if (!lst || !f || !del)
		return (NULL);
	newlist = NULL;
	while (lst)
	{
		content = f(lst -> content);
		newnode = ft_lstnew(content);
		if (!newnode)
		{
			if (content)
			{
				del(content);
				ft_lstclear(&newlist, del);
				newlist = NULL;
			}
		}
		ft_lstadd_back(&newlist, newnode);
		lst = lst -> next;
	}
	return (newlist);
}
