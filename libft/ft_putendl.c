/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 04:54:38 by ayip              #+#    #+#             */
/*   Updated: 2017/09/21 05:02:04 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl(char const *s)
{
	int		len;

	len = 0;
	if (!s)
		return ;
	while (s[len])
		len++;
	write(1, s, len);
	write(1, "\n", 1);
}
