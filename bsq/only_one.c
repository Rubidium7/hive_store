/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_one.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:21:59 by nlonka            #+#    #+#             */
/*   Updated: 2022/07/20 19:22:01 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	one_location(t_shape *sh)
{
	int	y;
	int	x;

	y = 0;
	x = 0;
	while (y != sh->height - 1)
	{
		while (x != sh->width)
		{
			if (sh->array[y][x] == 1)
			{
				sh->big = 1;
				sh->y = y;
				sh->x = x;
				return (0);
			}
			x++;
		}
		x = 0;
		y++;
	}
	return (1);
}

void	only_one(t_shape *sh, t_ob *ob)
{
	one_location(sh);
	print_square(sh, ob);
}
