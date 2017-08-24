/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 23:03:43 by ayip              #+#    #+#             */
/*   Updated: 2017/08/23 23:07:10 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list			*tmp;

	tmp = begin_list;
	while (tmp && (*cmp)(tmp->data, data_ref))
		tmp = tmp->next;
	return (tmp);
}
