/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 11:23:29 by wto               #+#    #+#             */
/*   Updated: 2017/08/29 19:17:49 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_tools.h"
#include "str_parsing.h"
#include <stdio.h>

/*
** Read from stdin and convert it to a string
*/

char	*stdin_to_str(void)
{
	int		buffer_size;
	char	*buffer;
	char	*temp;
	int		ret;

	buffer_size = 1024;
	temp = NULL;
	buffer = malloc(sizeof(char) * buffer_size);
	buffer[0] = '\0';
	ret = read(0, buffer, buffer_size);
	while (ret > 0)
	{
		temp = malloc(sizeof(char) * buffer_size);
		ret = read(0, temp, buffer_size);
		buffer = ft_strcat(buffer, temp);
	}
	return (buffer);
}

int		main(void)
{
	char	*input;
	char	**grid;
	int		rows;
	int		cols;


	rows = 0;
	cols = 0;
	input = stdin_to_str();
	grid = str_parsing(input);
	
	while(*(grid+rows))
	{
		cols = 0;
		while(grid[rows][cols])
		{
			printf("%c", grid[rows][cols]);
			cols++;
		}
		printf("\n");
		rows++;
	}
	
	return (0);
}
