# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayip <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/18 18:19:50 by ayip              #+#    #+#              #
#    Updated: 2017/09/19 18:02:39 by ayip             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
SRC_DIR=./

FX=\
   ft_memset\
   ft_bzero\
   ft_memcpy\
   ft_memccpy\
   ft_strlen\
   ft_atoi\
   ft_isalpha\
   ft_isdigit\
   ft_isalnum\
   ft_isascii\
   ft_isprint\
   ft_isspace\
   ft_toupper\
   ft_tolower
OPTIONS=-I./
FLAGS=-Wall -Wextra -Werror

CFILES=$(patsubst %, $(SRC_DIR)%.c, $(FX))
OFILES=$(patsubst %, %.o, $(FX))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	@gcc $(OPTIONS) $(FLAGS) -c $(CFILES)
	@ar rc $(NAME) $(OFILES)
	@ranlib $(NAME)
	@/bin/rm -f $(OFILES)

clean:
	@/bin/rm -f $(OFILES)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
