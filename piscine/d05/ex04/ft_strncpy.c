/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 16:24:17 by ayip              #+#    #+#             */
/*   Updated: 2017/08/15 23:41:29 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*tmp;

	if (n <= 0)
		return (dest);
	i = 0;
	tmp = dest;
	while (i++ < n)
		if (*src)
			*tmp++ = *src++;
		else
			*tmp++ = 0;
	*tmp = 0;
	return (dest);
}
