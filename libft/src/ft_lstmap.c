/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 07:37:15 by ayip              #+#    #+#             */
/*   Updated: 2017/09/21 12:23:32 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*first;

	if (lst)
	{
		tmp = f(lst);
		first = tmp;
		while (lst->next)
		{
			if (!(tmp->next = f(lst->next)))
				return (NULL);
			tmp = tmp->next;
			lst = lst->next;
		}
		return (first);
	}
	return (NULL);
}
