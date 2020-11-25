/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 13:01:14 by csejault          #+#    #+#             */
/*   Updated: 2020/11/25 11:04:27 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int			i;
	int			sign;
	long long	ret;

	i = 0;
	sign = 1;
	ret = 0;
	if (!nptr[0])
		return (0);
	while (nptr[i] && (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13)))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		sign = (nptr[i++] == '-') ? -sign : sign;
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		ret = ret * 10 + nptr[i] - '0';
		i++;
		if (ret * sign > 2147483647)
			return (-1);
		if (ret * sign < -2147483648)
			return (0);
	}
	return (ret * sign);
}
