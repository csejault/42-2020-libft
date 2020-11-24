/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 20:32:11 by csejault          #+#    #+#             */
/*   Updated: 2020/11/23 17:38:01 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	freemalloc(char **ret, int idx)
{
	while (idx >= 0)
	{
		free(ret[idx]);
		idx--;
	}
	free(ret);
}

int		count_word(char const *s, char c)
{
	int cw;
	int nw;

	cw = 0;
	nw = 1;
	while (*s)
	{
		if (c == *s)
			nw = 1;
		else if (nw)
		{
			nw = 0;
			cw++;
		}
		s++;
	}
	return (cw);
}

int		count_letter(char const *s, char c, int *idx)
{
	int cl;

	cl = 0;
	while (c == s[idx[0]])
		idx[0]++;
	while (s[idx[0]] && c != s[idx[0]])
	{
		cl++;
		idx[0]++;
	}
	idx[0] = idx[0] - cl;
	return (cl);
}

void	fill_tabs(char *ret, char const *s, int l, int *idx)
{
	int j;

	j = 0;
	while (l > j)
	{
		ret[j] = s[idx[0]];
		j++;
		idx[0]++;
	}
	ret[j] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		idx[1];
	int		w;
	int		i;
	int		l;

	ret = NULL;
	if (!s)
		return (NULL);
	idx[0] = 0;
	i = 0;
	l = 0;
	w = count_word(s, c);
	if (!(ret = malloc(sizeof(s) * (w + 1))))
		return (NULL);
	while (w > i)
	{
		l = count_letter(s, c, idx);
		if (!(*ret = malloc(sizeof(*s) * (l + 1))))
			{
				freemalloc(ret,idx[0]);
				return (NULL);
			}
		fill_tabs(*ret, s, l, idx);
		ret++;
		i++;
	}
	*ret = NULL;
	return (ret - w);
}
