/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 15:02:23 by ayip              #+#    #+#             */
/*   Updated: 2017/09/20 15:11:57 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	while (i-- > 0)
	{
		if (*s == (char)c)
			return ((char*)s);
		s--;
	}
	return ((char)c == 0 ? (char*)s : (char*)0);
}
