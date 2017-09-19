/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 16:53:21 by ayip              #+#    #+#             */
/*   Updated: 2017/08/14 22:16:00 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	int		i;
	int		j;

	s = str;
	if (!*to_find)
		return (s);
	i = 0;
	while (s[i])
	{
		j = 0;
		while (s[i + j] == to_find[j])
		{
			if (!to_find[j + 1])
				return (s + i);
			if (!s[i + j + 1])
				return ((char *)0);
			j++;
		}
		i++;
	}
	return ((char *)0);
}
