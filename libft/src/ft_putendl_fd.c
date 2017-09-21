/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 05:14:06 by ayip              #+#    #+#             */
/*   Updated: 2017/09/21 05:14:25 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char const *s, int fd)
{
	int		len;

	len = 0;
	if (!s)
		return ;
	while (s[len])
		len++;
	write(fd, s, len);
	write(fd, "\n", 1);
}
