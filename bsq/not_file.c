/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   not_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:58:30 by nlonka            #+#    #+#             */
/*   Updated: 2022/07/20 19:26:43 by leklund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	not_file(char *str)
{
	t_shape	*shape;
	t_ob	*ob;

	ob = malloc(sizeof(t_ob));
	shape = malloc(sizeof(t_shape));
	str = first(ob, str);
	if (str == NULL)
		ft_putstr("map error\n");
	else
	{
		make_array(shape, str, ob);
		find_square(shape, ob);
	}
}
