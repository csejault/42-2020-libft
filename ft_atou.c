/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atou.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 10:36:46 by csejault          #+#    #+#             */
/*   Updated: 2021/01/20 10:41:51 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_atou(const char *nptr)
{
	int			i;
	long long	ret;

	i = 0;
	ret = 0;
	if (!nptr[0])
		return (0);
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		ret = ret * 10 + nptr[i] - '0';
		i++;
		if (ret > UINT_MAX)
			return (0);
	}
	return (ret);
}
