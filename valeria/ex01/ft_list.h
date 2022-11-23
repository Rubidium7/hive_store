/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:23:24 by nlonka            #+#    #+#             */
/*   Updated: 2022/07/12 18:07:33 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}		t_list;

t_list	*ft_create_elem(void *data);
void	ft_list_push_back(t_list **begin_list, void *data);

#endif
