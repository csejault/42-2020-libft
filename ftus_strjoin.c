/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftus_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 19:51:45 by csejault          #+#    #+#             */
/*   Updated: 2021/01/10 19:51:47 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ftus_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		i;
	int		j;
	char	*ret;

	ret = NULL;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	if (!(ret = malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = -1;
	while (s1[++i])
		ret[i] = s1[i];
	j = -1;
	while (s2[++j])
		ret[i + j] = s2[j];
	ret[i + j] = 0;
	return (ret);
}
