/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 21:04:34 by gpires-c          #+#    #+#             */
/*   Updated: 2026/06/14 13:11:16 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*ret;

	new = NULL;
	ret = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst->next != NULL)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
			ft_lstdelone(new, del);
		ft_lstadd_back(&ret, new);
		lst = lst->next;
	}
	new = ft_lstnew(f(lst->content));
	if (!new)
		ft_lstdelone(new, del);
	ft_lstadd_back(&ret, new);
	return (ret);
}
