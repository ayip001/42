/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_tools.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 00:02:21 by wto               #+#    #+#             */
/*   Updated: 2017/08/26 00:02:41 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_TOOLS_H
# define STR_TOOLS_H

# include <unistd.h>
# include <stdlib.h>

int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcat(char *s1, char *s2);

#endif
