/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayip <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 14:40:20 by ayip              #+#    #+#             */
/*   Updated: 2017/08/18 15:24:09 by ayip             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H
# define MIN -2147483648
# define ABS(Value) (Value) == MIN ? 0 : (int)((Value) < 0 ? -(Value) : (Value))

#endif
