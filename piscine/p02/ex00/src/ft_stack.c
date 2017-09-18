/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 14:49:20 by ayip              #+#    #+#             */
/*   Updated: 2017/08/27 20:56:31 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

t_stack				*ft_create_node(int *data)
{
	t_stack *tmp;

	tmp = malloc(sizeof(t_stack));
	tmp->is_op = data[1];
	tmp->value = data[0];
	tmp->prev = NULL;
	tmp->next = NULL;
	return (tmp);
}

t_stack				*ft_create_node_c(char *data)
{
	t_stack *tmp;

	tmp = malloc(sizeof(t_stack));
	tmp->is_op = ft_is_op(data[0]);
	tmp->value = tmp->is_op ? data[0] : ft_atoi(data);
	tmp->prev = NULL;
	tmp->next = NULL;
	return (tmp);
}

int					*ft_pop(t_stack **begin_list)
{
	t_stack	*tmp;
	int		*value;

	tmp = *begin_list;
	value = malloc(sizeof(int) * 2);
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		value[0] = tmp->value;
		value[1] = tmp->is_op;
		if (tmp->prev)
			(tmp->prev)->next = NULL;
		else
			*begin_list = NULL;
		free(tmp);
		return (value);
	}
	else
		return (NULL);
}

void				ft_push(t_stack **begin_list, int *data)
{
	t_stack *tmp;

	tmp = *begin_list;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = ft_create_node(data);
		(tmp->next)->prev = tmp;
	}
	else
		*begin_list = ft_create_node(data);
}

void				ft_push_c(t_stack **begin_list, char *data)
{
	t_stack *tmp;

	tmp = *begin_list;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = ft_create_node_c(data);
		(tmp->next)->prev = tmp;
	}
	else
		*begin_list = ft_create_node_c(data);
}
