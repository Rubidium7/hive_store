/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yes_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:28:02 by nlonka            #+#    #+#             */
/*   Updated: 2022/07/20 19:26:10 by leklund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

void	yes_file(int fd)
{
	char	*str;
	t_shape	*shape;
	t_ob	*ob;

	ob = malloc(sizeof(t_ob));
	shape = malloc(sizeof(t_shape));
	str = make_string(fd, 1);
	str = first(ob, str);
	if (str == NULL)
		ft_putstr("map error\n");
	else
	{
		make_array(shape, str, ob);
		find_square(shape, ob);
	}
}
