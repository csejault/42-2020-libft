/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftus_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 19:49:52 by csejault          #+#    #+#             */
/*   Updated: 2021/01/10 19:49:54 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		lt_len_n(long n)
{
	int	len;

	len = (n < 0) ? 1 : 0;
	n = (n < 0) ? -n : n;
	while (n > 9)
	{
		len++;
		n = n / 10;
	}
	return (++len);
}

static	void	lt_fill_ret(char *ret, long n, int len)
{
	ret[0] = (n < 0) ? '-' : 0;
	ret[len] = '\0';
	n = (n < 0) ? n * -1 : n;
	while (len > 0 && ret[len - 1] != '-')
	{
		ret[--len] = n % 10 + '0';
		n = n / 10;
	}
}

char			*ftus_itoa(int n)
{
	int		len;
	char	*ret;

	ret = NULL;
	len = lt_len_n((long)n);
	if (!(ret = malloc(sizeof(*ret) * (len + 1))))
		return (NULL);
	lt_fill_ret(ret, n, len);
	return (ret);
}
