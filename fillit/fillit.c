/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 00:35:07 by ayip              #+#    #+#             */
/*   Updated: 2017/10/31 00:42:51 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define G_BLK
#include "fillit.h"

int		set_tet(int bin)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i <= NUMBLK)
		if (bin == g_blk[i++])
			break ;
	if (i == NUMBLK + 1)
		return (-1);
	j = 0;
	while (g_tet[j] != -1)
		if (++j >= MAX)
			return (-1);
	g_tet[j] = i - 1;
	return (0);
}

void	print_board(void)
{
	int		r;
	int		c;

	r = 0;
	while (r < g_size)
	{
		c = 0;
		while (c < g_size)
		{
			write(1, (g_board[r][c] ? &g_board[r][c] : "."), 1);
			c++;
		}
		r++;
		write(1, "\n", 1);
	}
}

int		place_if(int row, int col, int teti)
{
	int		r;
	int		c;
	int		btet;

	btet = g_blk[(int)g_tet[teti]];
	r = 4;
	while (--r >= 0 && (c = 4))
		while (--c >= 0)
		{
			if (TET_BIT(r, c) & btet && g_board[3 - r + row][3 - c + col])
				return (0);
		}
	r = 4;
	while (--r >= 0 && (c = 4))
		while (--c >= 0)
			if (TET_BIT(r, c) & btet)
				g_board[3 - r + row][3 - c + col] = 65 + teti;
	return (1);
}

void	unplace(int row, int col, int teti)
{
	int		r;
	int		c;
	int		btet;

	btet = g_blk[(int)g_tet[teti]];
	r = 4;
	while (--r >= 0 && (c = 4))
		while (--c >= 0)
			if (TET_BIT(r, c) & btet)
				g_board[3 - r + row][3 - c + col] = 0;
}

int		bruticus2(int teti)
{
	int		row;
	int		col;

	row = 0;
	while (row < g_size)
	{
		col = 0;
		while (col < g_size)
		{
			if (place_if(row, col, teti))
			{
				if (g_tet[teti + 1] == -1)
				{
					print_board();
					return (1);
				}
				else if (bruticus2(teti + 1))
					return (1);
				unplace(row, col, teti);
			}
			col++;
		}
		row++;
	}
	return (0);
}
