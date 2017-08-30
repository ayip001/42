/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 06:57:37 by ayip              #+#    #+#             */
/*   Updated: 2017/08/30 07:08:06 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		min_three(int a, int b, int c)
{
	int		i;

	i = a;
	if (b < i)
		i = b;
	if (c < i)
		i = c;
	return (i);
}

int		validate(int x, int y, int j, int i)
{
	if (j > x + 1)
		return (1);
	if (i > y)
		return (1);
	return (0);
}

int		validate_endl(int x, int y, int *j, int *i)
{
	if (*j != x + 1)
		return (1);
	*j = 0;
	*i += 1;
	return (0);
}

void	set_y(int *y, char *str, int len)
{
	int		i;

	*y = 0;
	i = 0;
	while (i < len - 3)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			*y *= 10;
			*y += str[i] - '0';
		}
		else
		{
			*y = -1;
			return ;
		}
		i++;
	}
	if (str[i] == str[i + 1] || str[i] == str[i + 2] || str[i + 1] ==
		str[i + 2])
		*y = -1;
}

int		read_params(int fd, int *y, char *auf)
{
	char	str[BUFF];
	char	buff;
	int		i;

	i = 0;
	while (read(fd, &buff, 1))
		if (buff == 0)
			return (1);
		else if (buff == '\n')
			break ;
		else
			str[i++] = buff;
	str[i] = 0;
	if (i < 4)
		return (1);
	auf[2] = str[i - 1];
	auf[1] = str[i - 2];
	auf[0] = str[i - 3];
	set_y(y, str, i);
	if (*y != -1)
		return (0);
	else
		return (1);
}
