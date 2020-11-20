/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 20:56:50 by csejault          #+#    #+#             */
/*   Updated: 2020/11/20 13:07:46 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*retour;

	retour = NULL;
	if (!(retour = malloc(sizeof(s) * len + 1)))
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		retour[i] = s[start + i];
		i++;
	}
	retour[i] = '\0';
	return (retour);
}
