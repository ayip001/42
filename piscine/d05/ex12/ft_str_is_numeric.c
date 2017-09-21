/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 16:22:37 by ayip              #+#    #+#             */
/*   Updated: 2017/08/15 16:30:28 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	char *tmp;

	tmp = str;
	while (*tmp)
	{
		if (*tmp < '0' || *tmp > '9')
			return (0);
		tmp++;
	}
	return (1);
}