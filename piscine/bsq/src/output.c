/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 07:03:47 by ayip              #+#    #+#             */
/*   Updated: 2017/08/30 07:07:32 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_matrix(int x, int y, int **matrix)
{
	char	c;
	int		i;
	int		j;

	i = 0;
	while (i < y + 1)
	{
		j = 0;
		while (j < x + 1)
		{
			c = '0' + matrix[i][j++];
			write(1, &c, 1);
			write(1, " ", 1);
		}
		write(1, "\n", 1);
		i++;
	}
}

void	print_finish(int x, int y, char *auf, int **matrix)
{
	int		i;
	int		j;

	i = 1;
	while (i < y + 1)
	{
		j = 1;
		while (j < x + 1)
		{
			if (matrix[i][j])
				if (j > matrix[0][0] - matrix[1][0] && j <= matrix[0][0] &&
					i > matrix[0][1] - matrix[1][0] && i <= matrix[0][1])
					write(1, &auf[2], 1);
				else
					write(1, &auf[0], 1);
			else
				write(1, &auf[1], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
