# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkaplin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/16 18:03:20 by jkaplin           #+#    #+#              #
#    Updated: 2019/03/17 17:46:26 by jkaplin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

CFLAGS = -Wall -Werror -Wextra -I.

SRC =	main.c				\
		square.c			\
		fillit.c			\
		grid.c				\
		read.c				\
		valid.c				\
		hard_code.c			\
		hard_code_01_05.c	\
		hard_code_06_10.c	\
		hard_code_11_15.c	\
		hard_code_16_19.c	\
		libft/libft.a

all: $(NAME)

$(NAME): $(SRC)
	gcc $(CFLAGS) $(SRC) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
