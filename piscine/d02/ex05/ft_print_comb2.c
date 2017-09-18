/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 10:53:45 by ayip              #+#    #+#             */
/*   Updated: 2017/08/10 13:28:34 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_put_two_int(int first, int second)
{
	int first_digit;
	int second_digit;

	first_digit = first / 10;
	ft_putchar(first_digit + 48);
	second_digit = first - first_digit * 10;
	ft_putchar(second_digit + 48);
	ft_putchar(' ');
	first_digit = second / 10;
	ft_putchar(first_digit + 48);
	second_digit = second - first_digit * 10;
	ft_putchar(second_digit + 48);
	if (first != 98 || second != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	return (0);
}

void	ft_print_comb2(void)
{
	int first;
	int second;

	first = 0;
	while (first <= 99)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_put_two_int(first, second);
			second++;
		}
		first++;
	}
}
