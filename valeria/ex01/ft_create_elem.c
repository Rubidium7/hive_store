/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:17:50 by nlonka            #+#    #+#             */
/*   Updated: 2022/07/13 15:21:57 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*huu;

	huu = malloc(sizeof(t_list));
	if (huu)
	{
		huu->data = data;
		huu->next = NULL;
	}
	return (huu);
}
