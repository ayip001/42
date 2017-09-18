/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 19:20:46 by ayip              #+#    #+#             */
/*   Updated: 2017/08/17 19:42:58 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;
	int i;

	if (min >= max)
		return ((int*)0);
	range = (int*)malloc(sizeof(*range) * (max - min + 1));
	i = 0;
	while (min < max)
		range[i++] = min++;
	return (range);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	if ((*range = ft_range(min, max)))
		return (sizeof(range));
	else
	{
		*range = (int*)0;
		return (0);
	}
}
