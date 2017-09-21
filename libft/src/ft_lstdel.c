/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 07:34:27 by ayip              #+#    #+#             */
/*   Updated: 2017/09/21 07:36:59 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	if (!alst)
		return ;
	tmp = *alst;
	if (tmp)
	{
		if (tmp->next)
			ft_lstdel(&(tmp->next), del);
		ft_lstdelone(&tmp, del);
	}
	*alst = 0;
}
