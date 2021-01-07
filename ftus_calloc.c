/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftus_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 13:02:33 by csejault          #+#    #+#             */
/*   Updated: 2020/11/23 12:09:50 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ftus_calloc(size_t nmemb, size_t size)
{
	void *ret;

	ret = NULL;
	if (!(ret = malloc(size * nmemb)))
		return (NULL);
	ft_bzero(ret, nmemb * size);
	return (ret);
}
