/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_parsing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 23:46:52 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/08/27 03:00:13 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		scan_rows(char *str)
{
	int	rows;
	int	i;

	rows = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			rows++;
		i++;
	}
	if (rows == 0)
		return (++rows);
	return (rows);
}

int		scan_columns(char *str)
{
	int	columns;

	columns = 1;
	while (str[columns - 1] != '\0')
	{
		if (str[columns - 1] == '\n')
			return (columns);
		columns++;
	}
	return (columns);
}

char	**grid_setup(char *str)
{
	int		rows;
	int		columns;
	char	**grid;
	int		i;

	rows = scan_rows(str);
	columns = scan_columns(str);
	grid = malloc(sizeof(char*) * rows);
	i = 0;
	while (i < rows)
	{
		grid[i] = malloc(sizeof(char) * columns);
		i++;
	}
	return (grid);
}

char	**str_parsing(char *str)
{
	char	**grid;
	int		str_index;
	int		char_index;
	int		row_index;

	str_index = 0;
	row_index = 0;
	char_index = 0;
	grid = grid_setup(str);
	while (str[str_index] != '\0')
	{
		char_index = 0;
		while (str[str_index] != '\n' && str[str_index] != '\0')
		{
			grid[row_index][char_index] = str[str_index];
			char_index++;
			str_index++;
		}
		grid[row_index][char_index] = '\0';
		row_index++;
		str_index++;
	}
	return (grid);
}
