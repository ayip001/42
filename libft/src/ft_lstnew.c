/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 05:38:02 by ayip              #+#    #+#             */
/*   Updated: 2017/09/21 12:54:52 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*tmp;

	if (!(tmp = malloc(sizeof(t_list))))
		return (NULL);
	tmp->content = NULL;
	tmp->content_size = 0;
	tmp->next = NULL;
	if (content)
	{
		if (!(tmp->content = ft_memalloc(content_size)))
			return (NULL);
		tmp->content = ft_memcpy(tmp->content, content, content_size);
	}
	return (tmp);
}
