/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 09:54:50 by ayip              #+#    #+#             */
/*   Updated: 2017/08/10 13:16:14 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	char first_char;
	char second_char;
	char third_char;

	first_char = '0';
	while (first_char <= '7')
	{
		second_char = first_char;
		while (second_char++ < '9')
		{
			third_char = second_char;
			while (third_char++ < '9')
			{
				ft_putchar(first_char);
				ft_putchar(second_char);
				ft_putchar(third_char);
				if (first_char != '7' || second_char != '8')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
		first_char++;
	}
}
