/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:57:28 by nlonka            #+#    #+#             */
/*   Updated: 2022/07/19 11:01:06 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

int	make_array(t_shape *shape, char *str, t_ob *ob)
{
	int	row;
	int	check;

	check = count_size(shape, str);
	if (check == 1)
		return (1);
	shape->array = (int **)malloc(shape->height * sizeof(int *));
	shape->p = (char **) malloc (shape->height * sizeof(char *));
	row = 0;
	while (row < shape->height)
	{
		shape->p[row] = (char *) malloc (sizeof(char) * (shape->width + 1));
		shape->array[row] = ft_strndup(str, shape->width, ob);
		str = str + shape->width + 1;
		row++;
	}
	return (0);
}	
