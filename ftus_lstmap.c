/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftus_lstmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 19:50:33 by csejault          #+#    #+#             */
/*   Updated: 2021/01/10 19:50:44 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ftus_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	int		s;

	ret = NULL;
	while (lst)
	{
		s = ft_lstsize(ret);
		ft_lstadd_back(&ret, ftus_lstnew(f(lst->content)));
		lst = lst->next;
		if (ft_lstsize(ret) == s)
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
	}
	return (ret);
}
