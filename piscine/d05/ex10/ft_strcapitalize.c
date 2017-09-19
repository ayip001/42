/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 14:52:16 by ayip              #+#    #+#             */
/*   Updated: 2017/08/15 16:09:05 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int		ft_isletter(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

char	*ft_strcapitalize(char *str)
{
	char *tmp;
	char previous;

	tmp = str;
	previous = ' ';
	while (*tmp)
	{
		if (ft_isdigit(previous) && ft_isletter(previous))
			if (*tmp >= 'A' && *tmp <= 'Z')
				(*tmp) += 32;
		if (!(ft_isdigit(previous) || ft_isletter(previous)))
			if (*tmp >= 'a' && *tmp <= 'z')
				(*tmp) -= 32;
		previous = *tmp++;
	}
	return (str);
}
