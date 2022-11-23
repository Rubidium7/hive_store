/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:02:54 by nlonka            #+#    #+#             */
/*   Updated: 2022/07/20 18:20:54 by leklund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print_square(t_shape *sh, t_ob *ob)
{
	int	y;
	int	x;

	put_spot(sh, ob);
	y = 0;
	x = 0;
	while (y < sh->height - 1)
	{
		while (x < sh->width)
		{
			if (sh->array[y][x] == 0)
				sh->p[y][x] = ob->obs;
			else if (sh->p[y][x] != ob->full && sh->p[y][x] != ob->obs)
				sh->p[y][x] = ob->empty;
			x++;
		}
		ft_putstr(sh->p[y]);
		ft_putchar('\n');
		y++;
		x = 0;
	}
}
