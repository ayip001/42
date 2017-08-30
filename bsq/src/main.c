/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 16:23:59 by ayip              #+#    #+#             */
/*   Updated: 2017/08/30 07:13:04 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		main(int ac, char **av)
{
	int		fd;
	int		i;
	int		error;
	int		current_error;

	i = (ac > 1) ? 0 : -1;
	error = 0;
	while (++i < ac)
	{
		current_error = 0;
		fd = (ac == 1) ? 0 : open(av[i], O_RDONLY);
		if (fd != -1)
		{
			current_error = read_write(fd);
			close(fd);
		}
		else
			current_error = 1;
		if (current_error)
			write(2, WMSG(EMAP_MSG));
		error = error | current_error;
	}
	return (error);
}
