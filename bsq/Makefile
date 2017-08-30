# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayip <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/27 15:19:32 by ayip              #+#    #+#              #
#    Updated: 2017/08/30 06:57:20 by ayip             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=bsq
CC=gcc
CFLAGS=-Werror -Wall -Wextra
SRC=./src/
FX=parse memory helper output
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
