/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 09:29:26 by nlonka            #+#    #+#             */
/*   Updated: 2022/07/06 09:44:34 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	loca;

	loca = 0;
	while (str[loca] != '\0')
	{
		loca++;
	}
	return (loca);
}
