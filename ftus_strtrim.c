/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftus_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 19:52:17 by csejault          #+#    #+#             */
/*   Updated: 2021/01/10 19:52:19 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lt_char_present(char c, char const *set)
{
	int i;

	i = -1;
	while (set[++i])
		if (set[i] == c)
			return (1);
	return (0);
}

char		*ftus_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	i;
	size_t	len;

	ret = NULL;
	if (!s1)
		return (ret);
	len = ft_strlen(s1);
	i = 0;
	while (lt_char_present(s1[i], set))
		i++;
	while (s1[i] && lt_char_present(s1[len - 1], set))
		len--;
	ret = ftus_substr(s1, i, len - i);
	return (ret);
}
