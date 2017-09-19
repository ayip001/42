/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 21:37:12 by ayip              #+#    #+#             */
/*   Updated: 2017/08/15 23:15:26 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char	*s;
	int		n;
	int		d_len;
	int		s_len;

	s = src;
	n = size;
	d_len = 0;
	s_len = 0;
	while (*src++)
		s_len++;
	while (n-- && *dest++)
		d_len++;
	if (n < 0)
		return (d_len + s_len);
	while (*s)
	{
		if (--size > (unsigned int)d_len)
			*dest++ = *s;
		s++;
	}
	*dest = 0;
	return (d_len + s_len);
}
