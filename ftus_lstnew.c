/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftus_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 19:50:13 by csejault          #+#    #+#             */
/*   Updated: 2021/01/10 19:50:15 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ftus_lstnew(void *content)
{
	t_list *ret;

	ret = NULL;
	if (!(ret = malloc(sizeof(t_list))))
		return (NULL);
	ret->content = content;
	ret->next = NULL;
	return (ret);
}
