/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_tools.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 11:47:51 by wto               #+#    #+#             */
/*   Updated: 2017/08/27 11:47:52 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_tools.h"

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}
	else
	{
		return (s2[i] - s1[i]);
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_strcat(char *s1, char *s2)
{
	int		space;
	char	*ret_str;
	int		i;
	int		j;

	space = ft_strlen(s1) + ft_strlen(s2) + 1;
	ret_str = malloc(sizeof(char) * space);
	i = 0;
	while (s1[i] != '\0')
	{
		ret_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		ret_str[i] = s2[j];
		i++;
		j++;
	}
	ret_str[i] = '\0';
	free(s1);
	free(s2);
	return (ret_str);
}
