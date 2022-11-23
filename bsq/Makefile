# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlonka <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 15:55:21 by nlonka            #+#    #+#              #
#    Updated: 2022/07/20 18:04:48 by leklund          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = main.c put_spot.c only_one.c make_array.c count_size.c first.c ft_putchar.c ft_putstr.c ft_strcpy_m.c ft_strndup.c make_string.c print_square.c matrix.c yes_file.c not_file.c

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) $(SRC)

clean: 
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
