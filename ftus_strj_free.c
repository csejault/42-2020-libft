/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftus_strj_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:00:03 by csejault          #+#    #+#             */
/*   Updated: 2021/01/13 14:02:05 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ftus_strj_free(char *s1, char *s2)
{
	char *ret;

	ret = ftus_strjoin(s1, s2);
	free(s1);
	free(s2);
	if (!ret)
		return (NULL);
	return (ret);
}
