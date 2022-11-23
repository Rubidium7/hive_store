/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:57:42 by nlonka            #+#    #+#             */
/*   Updated: 2022/07/19 11:19:08 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*first(t_ob *ob, char *str)
{
	int	loca;
	int	spot;

	ob->lines = 0;
	loca = 0;
	while (str[loca] != '\n')
		loca++;
	ob->full = str[loca - 1];
	ob->obs = str[loca - 2];
	ob->empty = str[loca - 3];
	spot = loca - 4;
	if (spot < 0)
		return (NULL);
	loca = 0;
	while ((spot + 1) != loca)
	{
		if (str[loca] < '0' || str[loca] > '9')
			return (NULL);
			ob->lines = ob->lines * 10 + str[loca] - '0';
			loca++;
	}
	str = str + spot + 5;
	return (str);
}
