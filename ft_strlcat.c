/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 20:38:29 by csejault          #+#    #+#             */
/*   Updated: 2020/11/18 20:39:07 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t lend;
	size_t lens;
	size_t i;

	lend = ft_strlen(dst);
	lens = ft_strlen(src);
	if (size == 0)
		return (lend + lens);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[lend + i] = src[i];
		i++;
	}
	if (i < size - 1)
		dst[lend + i] = '\0';
	return (lend + lens);
}
