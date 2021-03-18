/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_til_no_c.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <clement.sejault@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 10:26:42 by csejault          #+#    #+#             */
/*   Updated: 2021/03/18 13:21:35 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_til_no_c(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] == c)
		i++;
	return (i);
}
