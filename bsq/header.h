/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:05:29 by nlonka            #+#    #+#             */
/*   Updated: 2022/07/20 16:11:51 by leklund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_shape
{
	char	**p;
	int		**array;
	int		height;
	int		width;
	int		y;
	int		x;
	int		big;
}	t_shape;

typedef struct s_ob
{
	int		lines;
	char	empty;
	char	obs;
	char	full;
}	t_ob;

void	not_file(char *str);
void	yes_file(int fd);
void	put_spot(t_shape *sh, t_ob *ob);
void	only_one(t_shape *sh, t_ob *ob);
void	print_square(t_shape *sh, t_ob *ob);
int		check_width(t_shape *ar);
int		check_map(t_ob *ob, t_shape *ar);
char	*first(t_ob *ob, char *str);
char	*make_string(int fd, int ret);
char	*ft_strcpy_m(char *dest, char *src, char buf);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		make_array(t_shape *shape, char *str, t_ob *ob);
int		*ft_strndup(char *src, int n, t_ob *ob);
int		count_size(t_shape *shape, char *str);
int		ft_strlen(char *str);
void	find_square(t_shape *sh, t_ob *ob);

#endif
