/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:43:24 by nlonka            #+#    #+#             */
/*   Updated: 2022/07/14 17:25:01 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data);

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*fuck;
	printf("beginning\n");
	if (begin_list)
	{
		printf("pointer is npot empty\n");
		if (*begin_list == NULL)
		{
			printf("list is empty\n");
			*begin_list = ft_create_elem(data);
		}
		else
		{
			fuck = (*begin_list);
			while (fuck->next != NULL)
			{
				fuck = fuck->next;
			}
		fuck->next = ft_create_elem(data);
		}
	}
}
