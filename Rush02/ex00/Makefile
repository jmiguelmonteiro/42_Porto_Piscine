# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/01 16:22:23 by josemigu          #+#    #+#              #
#    Updated: 2025/02/02 18:09:38 by josemigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL=/bin/sh

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = array.c dict.c input.c library.c rush-02.c

NAME := rush-02

.PHONY: all

all: $(NAME)

.PHONY: fclean

fclean:
	rm -rf $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)
