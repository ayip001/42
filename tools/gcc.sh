# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    gcc.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayip <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/17 15:14:19 by ayip              #+#    #+#              #
#    Updated: 2017/08/17 18:10:04 by ayip             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

TAGS="-Wall -Wextra -Werror"
OUT_NAME="a.out"

while getopts ':jn:L:cr:' opt; do
    case $opt in
        j)	# Just compile without error tags
			TAGS=""
			;; 
		n) 
			OUT_NAME="$OPTARG"
			;;
		L)	# gcc's -L. uses .a file as header. param is path to .a file
			EXTRA_TAGS=$EXTRA_TAGS" -L$OPTARG -lft "
			;;
		c)	# gcc's -c, makes C_OBJS into .o and then to .a header
			gcc -c *.c
			OUT_NAME="$(echo "$OUT_NAME" | if grep -lqv "\." ; then echo "$OUT_NAME" | sed 's/$/.a/' ; else echo "$OUT_NAME" ; fi)"
			ar rc $(echo "$OUT_NAME" | if grep -lqv "\.a" ; then echo "$OUT_NAME" | sed 's/\..*/.a/' ; else echo "$OUT_NAME" ; fi) *.o
			rm -f *.o
			exit 1
			;;
		r)	# run && ./a.out ARGS
			RUN_TAGS="$OPTARG"
			;;
        *)
			exit 1
			;;
    esac
done

RUN_TAGS=" ./$OUT_NAME "$RUN_TAGS
gcc $TAGS *c $EXTRA_TAGS && time $RUN_TAGS
