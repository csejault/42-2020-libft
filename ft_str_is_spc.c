/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_spc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <clement.sejault@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 09:37:59 by csejault          #+#    #+#             */
/*   Updated: 2021/03/17 10:10:10 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_is_spc(char *line)
{
	if (!line)
		return (0);
	else if (!*line)
		return (0);
	while (*line == ' ')
		line++;
	if (!*line)
		return (1);
	else
		return (0);
}
