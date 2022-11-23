/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:07:45 by nlonka            #+#    #+#             */
/*   Updated: 2022/07/05 16:10:39 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	loca;

	loca = 0;
	while (s1[loca] == s2[loca] && loca <= n)
	{
		loca++;
		if (s1[loca] == '\0' && s2[loca] == '\0')
			return (0);
	}
	if (s1[loca] == '\0' || s2[loca] > s1[loca])
	{
		return (1);
	}
	if (s2[loca] == '\0' || s1[loca] > s2[loca])
	{
		return (-1);
	}
}
