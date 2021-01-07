/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftus_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 20:56:50 by csejault          #+#    #+#             */
/*   Updated: 2020/11/25 16:20:20 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ftus_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*retour;

	i = 0;
	retour = NULL;
	if (!s)
		return (NULL);
	if (!(retour = malloc(sizeof(*s) * (len + 1))))
		return (NULL);
	retour[i] = '\0';
	while (i < start)
	{
		if (!s[i])
			return (retour);
		i++;
	}
	i = 0;
	while (i < len && s[start + i])
	{
		retour[i] = s[start + i];
		i++;
	}
	retour[i] = '\0';
	return (retour);
}
