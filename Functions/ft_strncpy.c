/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 09:46:43 by nlonka            #+#    #+#             */
/*   Updated: 2022/07/05 15:43:33 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		loca;

	loca = 0;
	while (src[loca] != '\0' || loca <= n)
	{
		dest[loca] = src[loca];
		loca++;
	}
	while (n - loca != 0)
	{
		dest[loca] = '0';
			loca++;
	}
	return (dest);
}
