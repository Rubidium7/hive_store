/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 10:46:48 by nlonka            #+#    #+#             */
/*   Updated: 2022/07/05 15:21:39 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char a);

void	ft_putstr(char *str)
{
	int	hi;

	hi = 0;
	while (str[hi] != '\0')
	{
		ft_putchar(str[hi]);
		hi++;
	}
}
