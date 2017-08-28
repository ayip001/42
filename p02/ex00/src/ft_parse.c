/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 15:49:21 by ayip              #+#    #+#             */
/*   Updated: 2017/08/27 21:52:49 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "eval_expr.h"

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

void	stack_reverse(t_stack **begin_list)
{
	t_stack	*tmp;
	t_stack *current;

	current = *begin_list;
	while (current)
	{
		tmp = current->prev;
		current->prev = current->next;
		current->next = tmp;
		current = current->prev;
	}
	if (tmp)
		*begin_list = tmp->prev;
}

t_stack	*ft_parse(char *str)
{
	t_stack *input;
	char	**split;
	int		i;

	input = NULL;
	split = ft_split_whitespaces(str);
	i = 0;
	while (split[i])
		ft_push_c(&input, split[i++]);
	stack_reverse(&input);
	return (input);
}
