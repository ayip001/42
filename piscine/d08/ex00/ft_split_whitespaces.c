/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 22:40:47 by ayip              #+#    #+#             */
/*   Updated: 2017/08/18 12:31:23 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		num_words(char *str)
{
	char	*s;
	int		total;
	int		is_space;

	s = str;
	total = 0;
	is_space = 1;
	while (*s)
	{
		if (is_space && !(*s == ' ' || *s == '\t' || *s == '\n'))
			total++;
		if (*s == ' ' || *s == '\t' || *s == '\n')
			is_space = 1;
		else
			is_space = 0;
		s++;
	}
	return (total);
}

int		ft_len_space(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0 && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		i++;
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	char	**split;
	int		i;
	int		j;
	int		writing;

	split = malloc(sizeof(*split) * (num_words(str) + 1));
	i = 0;
	j = 0;
	writing = 0;
	while (*str)
	{
		if (!writing && !(*str == ' ' || *str == '\t' || *str == '\n'))
		{
			split[i] = malloc(sizeof(split) * (ft_len_space(str) + 1));
			j = 0;
		}
		if (writing && (*str == ' ' || *str == '\t' || *str == '\n'))
			split[i++][j] = 0;
		writing = (*str == ' ' || *str == '\t' || *str == '\n' ? 0 : 1);
		if (writing)
			split[i][j++] = *str;
		str++;
	}
	split[(writing ? i + 1 : i)] = 0;
	return (split);
}
