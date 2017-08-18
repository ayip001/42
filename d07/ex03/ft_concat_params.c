/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 19:43:50 by ayip              #+#    #+#             */
/*   Updated: 2017/08/17 20:29:16 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_total_char(char **argv)
{
	int		totalchar;
	int		i;
	int		j;

	totalchar = 0;
	i = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			argv[i][j++];
			totalchar++;
		}
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

	fullstr = (char*)malloc(sizeof(*fullstr) * (get_total_char(argv) + 1));
	totalchar = 0;
	i = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			fullstr[totalchar++] = argv[i][j++];
		fullstr[totalchar++] = '\n';
		i++;
	}
	return ((char*)0);
}
