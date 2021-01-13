/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftus_utoabase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 19:52:52 by csejault          #+#    #+#             */
/*   Updated: 2021/01/10 19:53:22 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	size_ret(unsigned int toconv, size_t l_base)
{
	size_t	l_ret;

	l_ret = 1;
	while (toconv > l_base)
	{
		l_ret++;
		toconv /= l_base;
	}
	return (l_ret);
}

char			*ftus_utoabase(unsigned int toconv, char *baseto)
{
	char			*ret;
	size_t			l_base;
	size_t			l_ret;
	unsigned int	u;

	ret = NULL;
	if (!baseto)
		return (ret);
	l_base = ft_strlen(baseto);
	if (l_base < 2)
		return (ret);
	l_ret = size_ret(toconv, l_base);
	ret = malloc(sizeof(*ret) * (l_ret + 1));
	if (!ret)
		return (ret);
	ret[l_ret] = '\0';
	while (l_ret-- > 0)
	{
		u = 0;
		while (u < toconv % l_base)
			u++;
		ret[l_ret] = baseto[u];
		toconv /= l_base;
	}
	return (ret);
}
