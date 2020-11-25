/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault </var/mail/csejault>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 11:09:29 by csejault          #+#    #+#             */
/*   Updated: 2020/11/25 11:10:26 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lend;
	size_t	lens;

	lend = 0;
	lens = 0;
	while (dst[lend] && lend < size)
		lend++;
	while (src[lens] && lend + lens + 1 < size)
	{
		dst[lend + lens] = src[lens];
		lens++;
	}
	if (lend != size)
		dst[lend + lens] = '\0';
	return (lend + ft_strlen(src));
}
