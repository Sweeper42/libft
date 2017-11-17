/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_skip_space__.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:40:59 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/17 15:13:02 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_int.h"
#include "ft_cstring.h"

inline void		int_skip_space__(char const **r_s)
{
	while (ft_isblank((int)**r_s))
		(*r_s)++;
	while (**r_s == '0')
		(*r_s)++;
}
