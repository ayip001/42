/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 17:56:00 by ayip              #+#    #+#             */
/*   Updated: 2017/08/15 18:10:14 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
