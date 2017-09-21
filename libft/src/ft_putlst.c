/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 06:28:49 by ayip              #+#    #+#             */
/*   Updated: 2017/09/21 06:41:53 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putflstelm(t_list *elem)
{
	ft_putlstelm(elem);
	write(1, " -> ", 4);
}

void		ft_putlst(t_list *lst)
{
	write(1, "[", 1);
	ft_lstiter(lst, ft_putflstelm);
	write(1, "NULL]\n", 6);
}
