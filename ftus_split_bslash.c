/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftus_split_bslash.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 15:30:26 by csejault          #+#    #+#             */
/*   Updated: 2021/01/20 15:44:47 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function ignore ' ' if previous char is '\'
*/

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
	int				cl;
	unsigned char	b_slash_char;
	bool			b_slash;

	b_slash_char = 92;
	b_slash = false;
	cl = 0;
	while (c == s[idx[0]])
		idx[0]++;
	while (s[idx[0]] && (c != s[idx[0]] || b_slash))
	{
		if (s[idx[0]] == b_slash_char)
			b_slash = true;
		else
			b_slash = false;
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
	unsigned char	b_slash_char;
	int				cw;
	int				nw;
	bool			b_slash;

	b_slash_char = 92;
	cw = 0;
	nw = true;
	b_slash = false;
	while (*s)
	{
		if (*s == c && !b_slash)
			nw = 1;
		else if (nw)
		{
			nw = 0;
			cw++;
		}
		if (*s == b_slash_char)
			b_slash = true;
		else
			b_slash = false;
		s++;
	}
	return (cw);
}

char		**ftus_split_bslash(char const *s, char c)
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

/*
** int main( int ac, char **av)
** {
** 	char	**split;
** 	int		count;
**
** 	if (ac !=2)
** 	{
** 		printf("Wrong number of args\n");
** 		return (-1);
** 	}
**
** 	split = ftus_split_path_space(av[1]);
** 	if (!split)
** 		printf("split null\n");
** 	count = ft_count_split(split);
** 	printf("NBR de split : %d\n", count);
** }
*/
