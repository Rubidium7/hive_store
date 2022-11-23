/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:59:54 by nlonka            #+#    #+#             */
/*   Updated: 2022/07/04 20:00:43 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	loca;
	int	out;
	int	check;

	out = 0;
	loca = 0;
	check = 1;
	if (str[loca] == '-' || str[loca] == '+')
	{
		if (str[loca] == '-')
		{
			check = -1;
		}
		loca++;
	}
	while (str[loca] >= '0' && str[loca] <= '9')
	{
		out = out * 10 + str[loca] - '0';
			loca++;
	}
	return (out * check);
}
