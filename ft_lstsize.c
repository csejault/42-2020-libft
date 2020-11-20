/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 20:03:55 by csejault          #+#    #+#             */
/*   Updated: 2020/11/19 20:23:23 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t s;

	if (!lst)
		return (0);
	s = 0;
	while (lst->next)
	{
		lst = lst->next;
		s++;
	}
	return (++s);
}
