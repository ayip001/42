/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 20:23:00 by ayip              #+#    #+#             */
/*   Updated: 2017/08/23 20:49:49 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *tmp;

	tmp = *begin_list;
	if (tmp)
	{
		if (tmp->next)
			ft_list_clear(&(tmp->next));
		free(tmp);
	}
	*begin_list = 0;
}
