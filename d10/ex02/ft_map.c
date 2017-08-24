/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 22:13:19 by ayip              #+#    #+#             */
/*   Updated: 2017/08/22 22:16:15 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *final;

	i = 0;
	final = malloc(sizeof(int) * length);
	while (i < length)
	{
		final[i] = f(tab[i]);
		i++;
	}
	return (final);
}
