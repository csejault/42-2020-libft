/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 17:00:24 by csejault          #+#    #+#             */
/*   Updated: 2021/01/19 17:00:30 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_is_nbr(char *str)
{
	int i;
	int sign;

	if (!str)
		return (0);
	sign = 0;
	i = 0;
	if (str[0] == '-' || str[0] == '+')
	{
		sign = 1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
		i++;
	if (str[i] || (i - sign == 0))
		return (0);
	else
		return (1);
}
