/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 16:33:20 by ayip              #+#    #+#             */
/*   Updated: 2017/08/10 19:31:01 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int len;

	len = 1;
	if (nb == -2147483648)
	{
		ft_putnbr(-2);
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
		return ;
	}
	while (nb / len != 0)
		len *= 10;
	while (len > 1)
	{
		ft_putchar(nb / (len / 10) - (nb / len) * 10 + 48);
		len /= 10;
	}
}

void	ft_putnbr_f(int first, int second, int lim)
{
	int checker;

	checker = first;
	while (checker * 10 < lim)
	{
		ft_putchar('0');
		checker = checker * 10 + 1;
	}
	ft_putnbr(first);
	ft_putchar(' ');
	checker = second;
	while (checker * 10 < lim)
	{
		ft_putchar('0');
		checker = checker * 10 + 1;
	}
	ft_putnbr(second);
	if (second != lim || first != lim - 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int first;
	int second;
	int lim;
	int size;

	size = n;
	lim = 1;
	while (n-- > 0)
		lim *= 10;
	--lim;
	first = 0;
	while (first <= lim)
	{
		second = first + 1;
		while (second <= lim)
			ft_putnbr_f(first, second++, lim);
		first++;
	}
}
