/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 09:53:13 by ayip              #+#    #+#             */
/*   Updated: 2017/08/12 10:28:49 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	put_clm(char clm, char first, char mid, char last)
{
	if (clm == 'f')
		ft_putchar(first);
	else if (clm == 'l')
		ft_putchar(last);
	else
		ft_putchar(mid);
}

char	which_clm(int i, int x)
{
	if (i == 0)
		return ('f');
	else if (i == x - 1)
		return ('l');
	else
		return ('m');
}

void	rush(int x, int y)
{
	int i;
	int j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if (j == 0)
				put_clm(which_clm(i, x), 'o', '-', 'o');
			else if (j == y - 1)
				put_clm(which_clm(i, x), 'o', '-', 'o');
			else
				put_clm(which_clm(i, x), '|', ' ', '|');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
