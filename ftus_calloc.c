/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftus_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 19:40:06 by csejault          #+#    #+#             */
/*   Updated: 2021/01/10 19:40:07 by csejault         ###   ########.fr       */
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
