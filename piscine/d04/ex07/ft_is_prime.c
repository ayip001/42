/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 15:43:42 by ayip              #+#    #+#             */
/*   Updated: 2017/08/12 16:44:02 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int lim;

	i = 2;
	lim = nb / i;
	if (nb <= 1)
		return (0);
	while (i < lim)
	{
		if (nb % i == 0)
			return (0);
		i++;
		lim = nb / i;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
