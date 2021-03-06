/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftus_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 12:50:36 by csejault          #+#    #+#             */
/*   Updated: 2021/01/13 12:50:39 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		lt_len_n(long n)
{
	int	len;

	if (n < 0)
	{
		len = 1;
		n = -n;
	}
	else
		len = 0;
	while (n > 9)
	{
		len++;
		n = n / 10;
	}
	len++;
	return (len);
}

static	void	lt_fill_ret(char *ret, long n, int len)
{
	int sign;

	if (n < 0)
	{
		ret[0] = '-';
		n = n * -1;
		sign = 1;
	}
	else
	{
		ret[0] = '0';
		sign = 0;
	}
	ret[len] = '\0';
	while (len > 0 + sign)
	{
		len--;
		ret[len] = n % 10 + '0';
		n = n / 10;
	}
}

char			*ftus_itoa(int n)
{
	int		len;
	char	*ret;

	ret = NULL;
	len = lt_len_n((long)n);
	ret = malloc(sizeof(*ret) * (len + 1));
	if (!ret)
		return (NULL);
	lt_fill_ret(ret, n, len);
	return (ret);
}
