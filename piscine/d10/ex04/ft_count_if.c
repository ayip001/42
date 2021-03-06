/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 22:19:48 by ayip              #+#    #+#             */
/*   Updated: 2017/08/22 22:22:07 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int total;
	int i;

	total = 0;
	i = 0;
	while (tab[i])
		if (f(tab[i++]))
			total++;
	return (total);
}
