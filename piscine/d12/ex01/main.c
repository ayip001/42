/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 12:04:23 by ayip              #+#    #+#             */
/*   Updated: 2017/08/24 19:45:43 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	put_error(char *filename)
{
	int i;

	i = 0;
	write(2, "cat: ", 5);
	while (filename[i])
		write(2, &filename[i++], 1);
	if (errno == 2)
		write(2, ": No such file or directory", 27);
	if (errno == 13)
		write(2, ": Permission denied", 19);
	write(2, "\n", 1);
}

void	put_file(int fd)
{
	char	buf;

	while (read(fd, &buf, 1))
		write(1, &buf, 1);
}

int		main(int argc, char **argv)
{
	int		fd;
	char	buf;
	int		i;
	int		error;

	i = 0;
	error = 0;
	if (argc == 1)
		while (read(0, &buf, 1))
			write(1, &buf, 1);
	while (++i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd != -1)
		{
			put_file(fd);
			close(fd);
		}
		else
		{
			error = 1;
			put_error(argv[i]);
		}
	}
	return (error);
}
