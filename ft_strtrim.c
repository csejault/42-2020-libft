/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 20:48:41 by csejault          #+#    #+#             */
/*   Updated: 2020/11/18 20:49:41 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_present(char c, char const *set)
{
	int i;

	i = -1;
	while (set[++i])
		if (set[i] == c)
			return (1);
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	i;
	size_t	len;

	len = ft_strlen(s1);
	i = 0;
	while (ft_char_present(s1[i], set))
		i++;
	while (s1[i] && ft_char_present(s1[len - 1], set))
		len--;
	ret = ft_substr(s1, i, len - i);
	return (ret);
}
