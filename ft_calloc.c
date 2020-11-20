/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 13:02:33 by csejault          #+#    #+#             */
/*   Updated: 2020/11/18 13:03:28 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *ret;

	ret = NULL;
	if (size == 0 || nmemb == 0)
		return (ret);
	if (!(ret = malloc(size * nmemb)))
		return (NULL);
	ft_bzero(ret, nmemb);
	return (ret);
}
