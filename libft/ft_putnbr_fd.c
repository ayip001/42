/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 05:14:42 by ayip              #+#    #+#             */
/*   Updated: 2017/09/21 05:16:33 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int nb, int fd)
{
	char	c;

	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = 0 - nb;
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	c = '0' + nb % 10;
	write(fd, &c, 1);
}
