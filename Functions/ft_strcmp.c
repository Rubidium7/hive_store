/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:07:23 by nlonka            #+#    #+#             */
/*   Updated: 2022/07/06 21:02:26 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	loca;

	loca = 0;
	while (s1[loca] == s2[loca])
	{
		loca++;
		if (s1[loca] == '\0' && s2[loca] == '\0')
			return (0);
	}
		return (s1[loca] - s2[loca]);
}
