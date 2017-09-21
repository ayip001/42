/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 13:54:41 by ayip              #+#    #+#             */
/*   Updated: 2017/08/12 14:22:11 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int t;

	i = 0;
	t = 1;
	if (nb == 0)
		return (0);
	while (i++ < power)
		t *= nb;
	return (t);
}