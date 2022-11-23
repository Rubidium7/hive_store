/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:18:08 by nlonka            #+#    #+#             */
/*   Updated: 2022/07/20 21:46:21 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

int	count_size(t_shape *shape, char *str)
{
	shape->width = 0;
	shape->height = 0;
	while (*str && *str != '\n')
	{
		shape->width++;
		str++;
	}
	while (*str)
	{
		if (*str == '\n')
			shape->height++;
		str++;
	}
	return (0);
}
