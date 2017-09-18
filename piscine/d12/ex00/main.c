/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 12:04:23 by ayip              #+#    #+#             */
/*   Updated: 2017/08/24 15:31:59 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	buf;

	if (argc == 2)
	{
		if (!(fd = open(argv[1], O_RDONLY)))
		{
			write(2, "open() error\n", 13);
			return (1);
		}
		while (read(fd, &buf, 1))
			write(1, &buf, 1);
		if (close(fd) == -1)
		{
			write(2, "close() error\n", 14);
			return (1);
		}
		return (0);
	}
	else if (argc < 2)
		write(2, "File name missing.\n", 19);
	else
		write(2, "Too many arguments.\n", 20);
	return (1);
}
