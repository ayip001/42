# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayip <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/24 13:23:06 by ayip              #+#    #+#              #
#    Updated: 2017/08/24 15:35:58 by ayip             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

HEAD = -I ./includes/

FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	@gcc $(HEAD) $(FLAGS) main.c -o $(NAME)

clean:
	@echo "nothing to do here" > /dev/null

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
