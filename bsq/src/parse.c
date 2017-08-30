/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 16:34:48 by ayip              #+#    #+#             */
/*   Updated: 2017/08/30 07:13:50 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	get_x_init_matrix(int fd, int *x, char *auf, int **matrix)
{
	int		*first_line;
	char	buff;
	int		size;
	int		i;

	first_line = malloc(sizeof(int) * BUFF);
	first_line[0] = 0;
	size = BUFF;
	i = 0;
	while (read(fd, &buff, 1))
	{
		if (i++ >= size - 1)
			first_line = ft_realloc(first_line, (size *= 2));
		if (buff == auf[0])
			first_line[i] = 1;
		else if (buff == auf[1])
			first_line[i] = 0;
		else
			break ;
	}
	*x = (buff == '\n') ? i - 1 : -1;
	matrix[1] = malloc(sizeof(int) * (*x + 1));
	matrix[1] = first_line;
}

void	set_maxxy_with_first_line(int x, int **matrix)
{
	int		i;

	i = 0;
	while (i < x + 1)
	{
		if (matrix[1][i] == 1)
		{
			matrix[1][0] = 1;
			matrix[0][0] = i;
			matrix[0][1] = 1;
			return ;
		}
		i++;
	}
}

void	put_nbr_in_matrix(int j, int i, int **matrix)
{
	matrix[i][j] = min_three(matrix[i - 1][j], matrix[i][j - 1],
		matrix[i - 1][j - 1]) + 1;
	if (matrix[i][j] > matrix[1][0])
	{
		matrix[1][0] = matrix[i][j];
		matrix[0][0] = j;
		matrix[0][1] = i;
	}
}

int		set_rest_of_matrix(int fd, int *xy, char *auf, int **matrix)
{
	char	buff;
	int		i;
	int		j;

	i = 2;
	j = 0;
	while (read(fd, &buff, 1))
		if (validate(xy[0], xy[1], j++, i))
			return (1);
		else if (buff == auf[0])
			put_nbr_in_matrix(j, i, matrix);
		else if (buff == auf[1])
			matrix[i][j] = 0;
		else if (buff == '\n')
		{
			if (validate_endl(xy[0], xy[1], &j, &i))
				return (1);
		}
		else
			return (1);
	if (i != xy[1] + 1)
		return (1);
	return (0);
}

int		read_write(int fd)
{
	char	auf[3];
	int		xy[2];
	int		**matrix;
	int		i;

	if (read_params(fd, &xy[1], auf))
		return (1);
	matrix = malloc(sizeof(int*) * (xy[1] + 1));
	get_x_init_matrix(fd, &xy[0], auf, matrix);
	i = -1;
	while (i < xy[1])
		if (++i != 1)
			matrix[i] = malloc(sizeof(int) * (xy[0] + 1));
	i = 0;
	while (i < xy[0] + 1)
		matrix[0][i++] = 0;
	set_maxxy_with_first_line(xy[0], matrix);
	if (set_rest_of_matrix(fd, xy, auf, matrix))
		return (1);
	print_finish(xy[0], xy[1], auf, matrix);
	return (0);
}
