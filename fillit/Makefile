# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayip <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/30 18:44:58 by ayip              #+#    #+#              #
#    Updated: 2017/10/31 00:41:43 by ayip             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=fillit
.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror main.c fillit.c -o $(NAME)

clean:
	@ls 1>/dev/null

fclean: clean
	@rm -f $(NAME)

re: fclean all
