/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:04:11 by nlonka            #+#    #+#             */
/*   Updated: 2022/07/05 15:19:50 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*out;
	int		yee;
	int		loca;

	yee = 0;
	loca = 0;
	while (str[yee] != '\0' && to_find[loca] == '\0')
	{
		if (str[yee] == to_find[loca])
		{
		out[loca] = str[yee];
		loca++;
		}
	yee++;
	}
	while (str[yee] != '\0')
	{
		out[loca] = str[yee];
		loca++;
		yee++;
	}
	out[loca] = '\0';
	return (out);
}
