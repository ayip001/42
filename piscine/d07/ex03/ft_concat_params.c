/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 19:43:50 by ayip              #+#    #+#             */
/*   Updated: 2017/08/17 21:20:40 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		total_char(int argc, char **argv)
{
	int		totalchar;
	int		i;
	int		j;

	totalchar = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j++])
			totalchar++;
		totalchar++;
		i++;
	}
	return (totalchar);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*fullstr;
	int		totalchar;
	int		i;
	int		j;

	fullstr = (char*)malloc(sizeof(*fullstr) * (total_char(argc, argv) + 1));
	totalchar = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			fullstr[totalchar++] = argv[i][j++];
		if (i < argc - 1)
			fullstr[totalchar++] = '\n';
		i++;
	}
	fullstr[totalchar] = 0;
	return (fullstr);
}
