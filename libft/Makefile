# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayip <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/18 18:19:50 by ayip              #+#    #+#              #
#    Updated: 2017/09/21 12:36:46 by ayip             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
SRC_DIR=./src/

FX=\
   ft_memset\
   ft_bzero\
   ft_memcpy\
   ft_memccpy\
   ft_memmove\
   ft_memchr\
   ft_memcmp\
   ft_strlen\
   ft_strdup\
   ft_strcpy\
   ft_strncpy\
   ft_strcat\
   ft_strncat\
   ft_strlcat\
   ft_strchr\
   ft_strrchr\
   ft_strstr\
   ft_strnstr\
   ft_strcmp\
   ft_strncmp\
   ft_strrev\
   ft_atoi\
   ft_isalpha\
   ft_isdigit\
   ft_isalnum\
   ft_isascii\
   ft_isprint\
   ft_isspace\
   ft_toupper\
   ft_tolower\
   ft_memalloc\
   ft_memdel\
   ft_strnew\
   ft_strdel\
   ft_strclr\
   ft_striter\
   ft_striteri\
   ft_strmap\
   ft_strmapi\
   ft_strequ\
   ft_strnequ\
   ft_strsub\
   ft_strjoin\
   ft_strtrim\
   ft_strsplit\
   ft_itoa\
   ft_putchar\
   ft_putstr\
   ft_putendl\
   ft_putnbr\
   ft_putchar_fd\
   ft_putstr_fd\
   ft_putendl_fd\
   ft_putnbr_fd\
   ft_lstnew\
   ft_lstdelone\
   ft_lstdel\
   ft_lstadd\
   ft_lstpush\
   ft_lstiter\
   ft_putlstelm\
   ft_putlst\
   ft_lstsize\
   ft_lstmap
OPTIONS=-I./include/
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
