/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 23:15:07 by ayip              #+#    #+#             */
/*   Updated: 2017/08/29 23:46:12 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, unsigned int size)
{
	unsigned int	i;
	int				*s;
	int				*d;

	s = (int*)src;
	d = (int*)dst;
	i = 0;
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

int		*ft_realloc(int *ptr, unsigned int size)
{
	int		*tmp;

	tmp = malloc(sizeof(*ptr) * size);
	ft_memcpy(tmp, ptr, size / 2);
	free(ptr);
	return (tmp);
}
