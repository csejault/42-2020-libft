/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftus_utoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 19:53:47 by csejault          #+#    #+#             */
/*   Updated: 2021/01/10 19:53:49 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ftus_utoa(unsigned int n)
{
	unsigned int	cp_n;
	int				len;
	char			*ret;

	cp_n = n;
	len = 0;
	while (n > 9)
	{
		len++;
		n = n / 10;
	}
	len++;
	ret = malloc(sizeof(*ret) * (len + 1));
	if (!ret)
		return (NULL);
	n = cp_n;
	ret[len] = '\0';
	while (len > 0)
	{
		ret[--len] = n % 10 + '0';
		n = n / 10;
	}
	return (ret);
}
