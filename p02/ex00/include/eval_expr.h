/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 19:43:35 by ayip              #+#    #+#             */
/*   Updated: 2017/08/27 23:30:24 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

# include <stdlib.h>
# include <unistd.h>

typedef struct		s_stack
{
	struct s_stack	*prev;
	struct s_stack	*next;
	int				is_op;
	int				value;
}					t_stack;

void				ft_push(t_stack **begin_list, int *data);

void				ft_push_c(t_stack **begin_list, char *data);

int					*ft_pop(t_stack **begin_list);

int					ft_is_op(char c);

int					ft_op_prior(char c);

int					*ft_eval(int a, int b, char op);

int					ft_atoi(char *str);

t_stack				*ft_parse(char *str);

void				to_rpn(t_stack **begin_list, t_stack *out, t_stack *op, int
	*pop);

void				stack_reverse(t_stack **begin_list);

int					un_rpn(t_stack **begin_list);

#endif
