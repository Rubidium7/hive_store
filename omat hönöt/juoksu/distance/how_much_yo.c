/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   how_much_yo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:31:31 by nlonka            #+#    #+#             */
/*   Updated: 2022/11/14 18:12:12 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ac, char **av)
{
	int	i;
	int	*ar;
	int	ans;
	int	h;

	i = 1;
	h = 1;
	ar = (int *) malloc (sizeof(int) * 3);
	if (ac != 4)
	{
		printf("include <repeats>, <walk> and <run>\n");
		return (1);
	}

	while (i != 4)
	{
		ar[i - 1] = atoi(av[i]);
		i++;
	}
	if (ar[1] == 0)
		h = 0;
	while (ar[1] > 2)
	{
		ar[1] = ar[1] - 3;
		h++;
	}
//	printf("h is %d\n", h);
//	printf("repeats are\n%d\n", ar[0]);
//	printf("walk interval is\n%d\n", ar[1]);
//	printf("run interval is\n%d\n", ar[2]);
	ans = (ar[0] * ar[2]) - (h * ar[0]);
	printf("next run should last %d minutes\n", ans);
	return (0);
}	
