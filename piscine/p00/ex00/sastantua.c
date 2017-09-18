/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 15:12:22 by ayip              #+#    #+#             */
/*   Updated: 2017/08/13 21:07:30 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		get_bottom_width(int i)
{
	if (i < 0)
		return (0);
	if (i == 0)
		return (5);
	return (get_bottom_width(i - 1) + 2 * ((i + 1) / 2 + 2) + (i + 2) * 2);
}

void	put_space(int w, int w_base)
{
	int num;
	int i;

	num = (w_base - w) / 2;
	i = 0;
	while (i++ < num)
		ft_putchar(' ');
	ft_putchar('/');
}

void	put_row(int w, int doorsize, int isknob)
{
	int i;

	i = 0;
	if (doorsize)
	{
		while (i++ < w / 2 - doorsize / 2)
			ft_putchar('*');
		i = 0;
		if (isknob)
		{
			while (i++ < doorsize - 2)
				ft_putchar('|');
			ft_putchar('$');
			ft_putchar('|');
		}
		else
			while (i++ < doorsize)
				ft_putchar('|');
		i = 0;
		while (i++ < w / 2 - doorsize / 2)
			ft_putchar('*');
	}
	else
		while (i++ < w)
			ft_putchar('*');
}

void	put_section(int i, int w_top, int w_base, int isbase)
{
	int w;
	int doorsize;
	int j;

	w = w_top;
	if (isbase)
		doorsize = (i / 2) * 2 + 1;
	else
		doorsize = 0;
	j = 0;
	while (j < i + 3)
	{
		put_space(w, w_base);
		if (j < i + 3 - doorsize)
			put_row(w, 0, 0);
		else if (doorsize >= 5 && j == i + 2 - doorsize / 2)
			put_row(w, doorsize, 1);
		else
			put_row(w, doorsize, 0);
		ft_putchar('\\');
		ft_putchar('\n');
		w += 2;
		j++;
	}
}

void	sastantua(int size)
{
	int i;
	int w_top;
	int w_base;

	if (size < 1)
		return ;
	i = 0;
	w_top = 1;
	w_base = get_bottom_width(size - 1);
	while (i < size)
	{
		if (i == size - 1)
			put_section(i, w_top, w_base, 1);
		else
			put_section(i, w_top, w_base, 0);
		i++;
		w_top = w_top + (i + 1) * 2 + 2 * ((i + 1) / 2 + 2);
	}
}
