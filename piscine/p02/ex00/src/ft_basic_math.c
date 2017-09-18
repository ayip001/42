/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic_math.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 14:59:41 by ayip              #+#    #+#             */
/*   Updated: 2017/08/27 23:27:03 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		ft_is_op(char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%' ||
		c == '(' || c == ')');
}

int		ft_op_prior(char c)
{
	if (c == '(' || c == ')')
		return (1);
	if (c == '+' || c == '-')
		return (2);
	if (c == '*' || c == '/' || c == '%')
		return (3);
	return (-1);
}

int		*ft_eval(int a, int b, char op)
{
	int *i;

	i = malloc(sizeof(int) * 2);
	i[1] = 0;
	if (op == '+')
		i[0] = (a + b);
	if (op == '-')
		i[0] = (a - b);
	if (op == '*')
		i[0] = (a * b);
	if (op == '/')
		i[0] = (a / b);
	if (op == '%')
		i[0] = (a % b);
	return (i);
}

int		ft_atoi(char *str)
{
	int digit;
	int value;
	int isneg;

	value = 0;
	isneg = 0;
	while (*str <= ' ')
		str++;
	if (*str == '-')
	{
		isneg = 1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		digit = *str - '0';
		value *= 10;
		value += digit;
		str++;
	}
	if (isneg)
		value = -value;
	return (value);
}
