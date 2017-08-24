/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 23:12:20 by ayip              #+#    #+#             */
/*   Updated: 2017/08/22 23:46:07 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int		calc(int fnum, int snum, char op)
{
	if (snum == 0)
		if (op == '/')


int		main(int argc, char **argv)
{
	char c;

	if (argc != 4)
		return (0);
	c = argv[2][0];
	if (c != '+' || c != '-' || c != '*' || c != '/' || c != '%')
		return (0);
	calc(ft_atoi(argv[1]), ft_atoi(argv[2]), c);
	return (0);
}
