/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_parsing.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 03:02:21 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/08/27 03:04:14 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_PARSING_H
# define STR_PARSING_H

# include <stdlib.h>

int		scan_rows(char *str);
int		scan_columns(char *str);
char	**grid_setup(char *str);
char	**str_parsing(char *str);

#endif
