/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftus_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:16:21 by csejault          #+#    #+#             */
/*   Updated: 2020/11/25 16:18:07 by csejault         ###   ########.fr       */
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
