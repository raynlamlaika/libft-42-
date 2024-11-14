/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 23:51:23 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/11/07 23:44:41 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*levrai;
	t_list	*pointer;

	if (!lst || !f || !del)
		return (NULL);
	levrai = NULL;
	while (lst)
	{
		pointer = ft_lstnew(f(lst->content));
		if (!pointer)
		{
			ft_lstclear(&levrai, del);
			return (NULL);
		}
		ft_lstadd_back(&levrai, pointer);
		lst = lst->next;
	}
	return (levrai);
}
