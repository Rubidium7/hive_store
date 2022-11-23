/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leklund <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:37:34 by leklund           #+#    #+#             */
/*   Updated: 2022/07/20 18:27:12 by leklund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

int	s(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	if (c <= b && c <= a)
		return (c);
	if (b <= a && b <= c)
		return (b);
	return (-1);
}

void	best_spot(t_shape *sh, int **m, int x, int y)
{
	sh->big = m[y][x];
	sh->x = x;
	sh->y = y;
}

void	box_check(t_shape *sh, int **m)
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	while (y < sh->height - 1)
	{
		while (x < sh->width)
		{
			if (sh->array[y][x] >= 1)
			{
				if (m[y - 1][x - 1] > 0 && m[y][x - 1] > 0 && m[y - 1][x] > 0)
				{
					m[y][x] = s(m[y - 1][x - 1], m[y][x - 1], m[y - 1][x]) + 1;
					if (m[y][x] > sh->big)
						best_spot(sh, m, x, y);
				}
			}
			x++;
		}
		x = 1;
		y++;
	}
}

void	find_square(t_shape *sh, t_ob *ob)
{
	sh->y = 0;
	sh->x = 0;
	sh->big = 0;
	box_check(sh, sh->array);
	if (sh->big == 0)
		only_one(sh, ob);
	else
		print_square(sh, ob);
}
