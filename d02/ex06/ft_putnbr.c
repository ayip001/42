/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 13:21:22 by ayip              #+#    #+#             */
/*   Updated: 2017/08/10 17:03:47 by ayip             ###   ########.fr       */
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
