/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:57:21 by nlonka            #+#    #+#             */
/*   Updated: 2022/07/20 20:29:09 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int ac, char **av)
{
	int	fd;
	int	loca;

	loca = 1;
	while (loca < ac)
	{
		fd = open(av[loca], O_APPEND);
		if (fd == -1)
			not_file(av[loca]);
		else
			yes_file(fd);
		close(fd);
		loca++;
	}
	return (0);
}
