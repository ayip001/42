/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 16:24:25 by ayip              #+#    #+#             */
/*   Updated: 2017/08/30 07:13:40 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# define BUFF (16)
# define WMSG(m) (m),(sizeof(m)-1)
# define EMAP_MSG "map error\n"

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

int		read_write(int fd);

int		*ft_realloc(void *ptr, unsigned int size);

int		min_three(int a, int b, int c);

int		validate(int x, int y, int j, int i);

int		validate_endl(int x, int y, int *j, int *i);

void	set_y(int *y, char *str, int len);

int		read_params(int fd, int *y, char *auf);

void	print_matrix(int x, int y, int **matrix);

void	print_finish(int x, int y, char *auf, int **matrix);

#endif
