/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:52:23 by nlonka            #+#    #+#             */
/*   Updated: 2022/11/07 18:03:25 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *str, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (str && str[i] != '\0')
	{
		f(i, &str[i]);
		i++;
	}
}
