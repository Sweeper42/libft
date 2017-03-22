/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_equal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 17:04:54 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/22 17:57:10 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cstring.h"
#include "ft_string.h"

t_bool					ft_string_equal(
							t_string_c *string,
							t_string_c *to_compare)
{
	if (string == to_compare)
		return (true);
	if (string->size != to_compare->size)
		return (false);
	if (!string->size && !to_compare->size)
		return (true);
	return (ft_strequal(string->str, to_compare->str));
}
