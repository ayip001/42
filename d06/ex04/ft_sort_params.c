/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 16:08:40 by ayip              #+#    #+#             */
/*   Updated: 2017/08/16 23:34:43 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
		if (s1[i++] == 0 && s2[i] == 0)
			return (0);
	return (s1[i] - s2[i]);
}

char	*ft_strcpy(char *dest, char *src)
{
	char *tmp;

	tmp = dest;
	while ((*tmp++ = *src++))
		;
	return (dest);
}

char	**sortn_strarray(char **str_array, int size)
{
	char	**tmp;
	char	swp[31];
	int		i;
	int		j;
	int		min_index;
	
	tmp = str_array;
	i = 0;
	while (i < size - 1)
	{
		min_index = i;
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tmp[min_index], tmp[j]))
				min_index = j;
			ft_strcpy(swp, tmp[min_index]);
			ft_strcpy(tmp[min_index], tmp[i]);
			ft_strcpy(tmp[i], swp);
			j++;
		}
		i++;
	}
	return (str_array);
}

#include <stdio.h>
#include <string.h>
int		main(int argc, char **argv)
{
	char	*tmp[31];
	int		i;

	i = 0;
	while (++argv)
		tmp[i++] = *argv;
	i = 0;
	while (i < argc - 1)
	{
		while (*tmp[i])
			ft_putchar(*tmp[i]++);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
