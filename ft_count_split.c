/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_split.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 14:07:21 by csejault          #+#    #+#             */
/*   Updated: 2021/01/20 14:11:56 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_split(char **split)
{
	int i;

	i = 0;
	if (!split)
		return (-1);
	while (split[i])
		i++;
	return (i);
}
