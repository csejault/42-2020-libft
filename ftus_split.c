/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftus_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 16:56:37 by csejault          #+#    #+#             */
/*   Updated: 2021/01/19 16:56:39 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	lt_fill_tabs(char *ret, char const *s, int l, int *idx)
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

static int	lt_count_letter(char const *s, char c, int *idx)
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

static int	lt_malloctab(char **ret, int *idx, const char *s, char c)
{
	int l;

	l = lt_count_letter(s, c, idx);
	if (!(*ret = malloc(sizeof(*s) * (l + 1))))
	{
		while (idx[0] >= 0)
		{
			free(ret[idx[0]]);
			idx[0]--;
		}
		free(ret);
		return (0);
	}
	lt_fill_tabs(*ret, s, l, idx);
	return (1);
}

static int	lt_count_word(char const *s, char c)
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

char		**ftus_split(char const *s, char c)
{
	char	**ret;
	int		idx[1];
	int		w;
	int		i;

	ret = NULL;
	if (!s)
		return (NULL);
	idx[0] = 0;
	i = 0;
	w = lt_count_word(s, c);
	if (!(ret = malloc(sizeof(s) * (w + 1))))
		return (NULL);
	while (w > i)
	{
		if (!(lt_malloctab(ret, idx, s, c)))
			return (ret);
		ret++;
		i++;
	}
	*ret = NULL;
	return (ret - w);
}
