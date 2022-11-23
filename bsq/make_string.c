/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:41:55 by nlonka            #+#    #+#             */
/*   Updated: 2022/07/19 10:52:21 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*make_string(int fd, int ret)
{
	char	*str;
	char	*str2;
	char	buf[1];
	int		i;

	i = 0;
	str2 = (char *) malloc (sizeof(char) * 2);
	while (ret != 0)
	{
		ret = read (fd, buf, 1);
		if (i % 2 == 0)
		{
			str = (char *) malloc (sizeof(char) * (i + 2));
			ft_strcpy_m(str, str2, buf[0]);
		}
		if (i % 2 == 1)
		{
			str2 = (char *) malloc (sizeof(char) * (i + 2));
			ft_strcpy_m(str2, str, buf[0]);
		}
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
