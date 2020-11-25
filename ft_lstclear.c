/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 12:48:25 by csejault          #+#    #+#             */
/*   Updated: 2020/11/25 11:06:42 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *previous;

	previous = NULL;
	if (!lst || !(*lst))
		return ;
	while (*lst)
	{
		previous = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(previous, del);
	}
	lst = NULL;
}
