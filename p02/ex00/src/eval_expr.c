/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 19:09:20 by ayip              #+#    #+#             */
/*   Updated: 2017/08/28 14:17:58 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		*ft_read_end(t_stack **begin_list)
{
	t_stack *tmp;
	int		*value;

	tmp = *begin_list;
	value = malloc(sizeof(int) * 2);
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		value[0] = tmp->value;
		value[1] = tmp->is_op;
		return (value);
	}
	else
	{
		value[0] = 0;
		value[1] = 1;
		return (value);
	}
}

void	to_rpn(t_stack **begin_list, t_stack *out, t_stack *op, int *pop)
{
	out = NULL;
	op = NULL;
	while (*begin_list)
	{
		pop = ft_pop(begin_list);
		if (pop[1])
			if (pop[0] == '(')
				ft_push(&op, pop);
			else if (pop[0] == ')')
			{
				while ((ft_read_end(&op))[0] != '(')
					ft_push(&out, ft_pop(&op));
				ft_pop(&op);
			}
			else
			{
				while(ft_op_prior(pop[0]) <= ft_op_prior((ft_read_end(&op))[0]))
					ft_push(&out, ft_pop(&op));
				ft_push(&op, pop);
			}
		else
			ft_push(&out, pop);
	}
	while (op)
		ft_push(&out, ft_pop(&op));
	*begin_list = out;
}

int		un_rpn(t_stack **begin_list)
{
	t_stack	*out;
	int		*pop;
	int		*a;
	int		*b;

	out = malloc(sizeof(t_stack*));
	pop = malloc(sizeof(int) * 2);
	a = malloc(sizeof(int) * 2);
	b = malloc(sizeof(int) * 2);
	stack_reverse(begin_list);
	while (*begin_list)
	{
		pop = ft_pop(begin_list);
		if (pop[1])
		{
			b = ft_pop(&out);
			a = ft_pop(&out);
			ft_push(&out, ft_eval(a[0], b[0], pop[0]));
		}
		else
			ft_push(&out, pop);
	}
	return ((ft_pop(&out))[0]);
}
