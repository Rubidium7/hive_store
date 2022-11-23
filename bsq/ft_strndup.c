/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:09:36 by nlonka            #+#    #+#             */
/*   Updated: 2022/07/18 14:17:04 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	*ft_strndup(char *src, int n, t_ob *ob)
{
	int	*str;
	int	i;

	i = 0;
	str = (int *)malloc (sizeof (int) * n);
	while (src[i] != '\0' && n != i)
	{
		if (!(src[i] == ob->empty || src[i] == ob->obs))
			return (NULL);
		if (src[i] == ob->empty)
			str[i] = 1;
		if (src[i] == ob->obs)
			str[i] = 0;
		i++;
	}
	return (str);
}
