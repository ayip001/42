# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayip <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/22 23:25:22 by ayip              #+#    #+#              #
#    Updated: 2017/08/22 23:40:22 by ayip             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = ./src/ft_putchar.c ./src/ft_putnbr.c ./src/ft_atoi.c

OFILES = ft_putchar.o ft_putnbr.o ft_atoi.o

HEADERS = -I ./includes/

C = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@$(C) -c $(CFLAGS) $(SRC)
	@$(C) $(HEADERS) $(CFLAGS) $(OFILES) main.c -o $(NAME)

clean:
	@/bin/rm -f $(OFILES)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
