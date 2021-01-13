/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftus_strj_fr_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 12:41:04 by csejault          #+#    #+#             */
/*   Updated: 2021/01/13 14:02:26 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ftus_strj_fr_1(char *s1, char const *s2)
{
	char *ret;

	ret = ftus_strjoin(s1, s2);
	free(s1);
	if (!ret)
		return (NULL);
	return (ret);
}
