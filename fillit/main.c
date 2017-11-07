/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 00:28:18 by ayip              #+#    #+#             */
/*   Updated: 2017/10/31 00:39:31 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		convert(int bin)
{
	if (bin == 0)
		return (-1);
	while (bin <= 0b0000111111111111)
		bin = bin << 4;
	while ((bin & 0b1000100010001000) == 0)
		bin = bin << 1;
	return (bin);
}

int		to_bin(char buff[21])
{
	int		val;
	int		i;

	i = -1;
	val = 0;
	while (i++ < 20)
		if (i == 20 && (buff[i] == '\n' || buff[i] == '\0'))
			return (convert(val));
		else if (i == 20)
			return (-1);
		else if (i != 0 && (i + 1) % 5 == 0 && buff[i] == '\n')
			continue;
		else if (i != 0 && (i + 1) % 5 == 0)
			return (-1);
		else if (buff[i] == '.')
			val *= 2;
		else if (buff[i] == '#')
			val = val * 2 + 1;
		else
			return (-1);
	return (-1);
}

void	clear_board(void)
{
	int		i;
	int		j;

	i = 0;
	while (i < MAX)
	{
		j = 0;
		while (j < MAX)
			if (i >= g_size || j >= g_size)
				g_board[i][j++] = 'x';
			else
				g_board[i][j++] = 0;
		i++;
	}
}

int		parse(void)
{
	int		i;
	char	buff[21];

	while ((buff[20] = '\n'))
	{
		i = read(g_fd, buff, 21);
		if (i != 21 && i != 20)
			return (1);
		if (set_tet(to_bin(buff)) == -1)
			return (1);
		if (i == 20)
			break ;
	}
	while (g_size++)
	{
		clear_board();
		if (bruticus2(0))
			break ;
	}
	return (0);
}

int		main(int ac, char **av)
{
	int		i;

	if (ac != 2)
		return (write(1, "error\n", 6));
	g_fd = open(av[1], O_RDONLY);
	if (g_fd < 1)
		return (write(1, "error\n", 6));
	i = 0;
	while (i < 27)
		g_tet[i++] = -1;
	g_size = 1;
	if (parse())
		return (write(1, "error\n", 6));
	return (0);
}
