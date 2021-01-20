/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 09:13:18 by csejault          #+#    #+#             */
/*   Updated: 2021/01/20 10:03:56 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_split(char **tofree)
{
	int i;

	i = 0;
	while (tofree[i])
	{
		free(tofree[i]);
		tofree[i] = NULL;
		i++;
	}
	tofree = NULL;
	free(tofree);
}
