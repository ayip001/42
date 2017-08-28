# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayip <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/27 15:19:32 by ayip              #+#    #+#              #
#    Updated: 2017/08/27 20:22:23 by ayip             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=eval_expr
CC=gcc
CFLAGS=-Werror -Wall -Wextra
SRC=./src/
FX=ft_basic_math ft_stack ft_parse eval_expr
OPTIONS=-I include

CFILES=$(patsubst %, $(SRC)%.c, $(FX))
OBJECTS=$(patsubst %, %.o, $(FX))

.PHONY: all clean fclean re

all: $(NAME)

$(OBJECTS):
	@$(CC) $(OPTIONS) $(FLAGS) -c $(CFILES)

$(NAME): $(OBJECTS)
	@$(CC) $(OPTIONS) $(FLAGS) $(OBJECTS) ./src/main.c -o $(NAME)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
