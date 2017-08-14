/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 15:07:41 by ayip              #+#    #+#             */
/*   Updated: 2017/08/13 15:07:45 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	put_row(char row, char first, char mid, char last)
{
	if (row == 'f')
		ft_putchar(first);
	else if (row == 'l')
		ft_putchar(last);
	else
		ft_putchar(mid);
}

char	which_row(int i, int x)
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
				put_row(which_row(i, x), 'A', 'B', 'C');
			else if (j == y - 1)
				put_row(which_row(i, x), 'A', 'B', 'C');
			else
				put_row(which_row(i, x), 'B', ' ', 'B');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
