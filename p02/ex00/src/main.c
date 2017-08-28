/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 15:05:30 by ayip              #+#    #+#             */
/*   Updated: 2017/08/28 14:17:56 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

#include <stdio.h>

void	popprintall(t_stack **begin_list)
{
	t_stack	*tmp;
	int		*pop;

	tmp = *begin_list;
	puts("top");
	while (tmp)
	{
		pop = ft_pop(&tmp);
		if (pop[1])
			printf("%c ", pop[0]);
		else
			printf("%d ", pop[0]);
	}
	puts("btm");
}
		
int main()
{
	t_stack *output;
	t_stack *out;
	t_stack *op;
	int		*pop;

	pop = malloc(sizeof(int) * 2);
	op = malloc(sizeof(t_stack*));
	out = malloc(sizeof(t_stack*));
	output = ft_parse("( (  1 + 2  ) )");
	to_rpn(&output, out, op, pop);
//	popprintall(&output);
	printf("%d", un_rpn(&output));
	return (0);
}
