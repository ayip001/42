/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 18:51:09 by ayip              #+#    #+#             */
/*   Updated: 2017/08/23 18:56:24 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*tmp;
	int		total;

	tmp = begin_list;
	total = 0;
	if (tmp)
	{
		total++;
		while (tmp->next)
		{
			tmp = tmp->next;
			total++;
		}
	}
	return (total);
}
