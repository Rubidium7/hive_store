/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 09:13:06 by nlonka            #+#    #+#             */
/*   Updated: 2022/07/18 18:13:05 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strcpy_m(char *dest, char *src, char buf)
{
	int	loca;

	loca = 0;
	while (src[loca] != '\0')
	{
		dest[loca] = src[loca];
		loca++;
	}
	dest[loca] = buf;
	dest[loca + 1] = '\0';
	return (dest);
}
