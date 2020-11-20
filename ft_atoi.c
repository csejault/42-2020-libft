/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 13:01:14 by csejault          #+#    #+#             */
/*   Updated: 2020/11/19 15:58:02 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int i;
	int sign;
	int ret;

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
	}
	return (ret * sign);
}
