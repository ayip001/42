# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayip <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/22 21:33:20 by ayip              #+#    #+#              #
#    Updated: 2017/08/22 23:00:01 by ayip             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./src/ft_putchar.c ./src/ft_putstr.c ./src/ft_strcmp.c ./src/ft_strlen.c \
		./src/ft_swap.c

OFILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

HEADERS = -I ./includes/

C = gcc

CFLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@$(C) $(CFLAGS) $(HEADERS) $(SRC)
	@ar rc $(NAME) $(OFILES)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OFILES)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
