# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hugrodri <hugrodri@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 16:49:40 by hugrodri          #+#    #+#              #
#    Updated: 2022/12/11 17:59:03 by hugrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRC = $(wildcard *.c)

CFLAGS = -I./include -Wextra -Werror -Wall

all:	$(NAME)

$(NAME):	$(SRC)
	gcc $(CFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f rush-02

fclean: clean
	rm -f rush-02
