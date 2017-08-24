/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 23:11:04 by ayip              #+#    #+#             */
/*   Updated: 2017/08/24 01:20:36 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	t_list *freenode;

	tmp = *begin_list;
	if (*begin_list == NULL)
		return;
	while (!(*cmp)(tmp->data, data_ref))
	{
		freenode = tmp;
		if (tmp->next)
		{
			tmp = tmp->next;
			free(freenode);
		}
		else
		{
			tmp = NULL;
			*begin_list = tmp;
			free(freenode);
			return;
		}
	}
	while (tmp && (tmp->next))
	{
		if (!(*cmp)((tmp->next)->data, data_ref))
		{
			freenode = tmp->next;
			if ((tmp->next)->next) {
				tmp->next = (tmp->next)->next;
			}
			else 
			{
				tmp->next = NULL;
			}
			free(freenode);
		}
		tmp = tmp->next;
	}
}
