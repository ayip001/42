/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 21:14:02 by ayip              #+#    #+#             */
/*   Updated: 2017/08/23 22:45:31 by ayip             ###   ########.fr       */
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

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*tmp;

	i = 0;
	tmp = begin_list;
	while (tmp && i++ < nbr)
		tmp = tmp->next;
	return (tmp);
}

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*tmp;
	int		len;
	int		i;

	len = ft_list_size(*begin_list);
	i = 1;
	while (i <= len / 2)
	{
		tmp = ft_list_at(*begin_list, len - i)->data;
		(ft_list_at(*begin_list, len - i))->data =
			ft_list_at(*begin_list, i - 1)->data;
		(ft_list_at(*begin_list, i - 1))->data = tmp;
		i++;
	}
}
