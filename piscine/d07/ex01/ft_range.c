/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 17:32:18 by ayip              #+#    #+#             */
/*   Updated: 2017/08/17 19:03:44 by ayip             ###   ########.fr       */
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
