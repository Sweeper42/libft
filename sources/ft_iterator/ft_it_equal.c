/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_it_equal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 13:46:39 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/27 13:59:01 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_iterator.h"

inline t_bool		ft_it_equal(
					t_iterator_c *it,
					t_iterator_c *to_compare,
					t_error_c **error_addr)
{
	if (!it->handler->equal)
	{
		if (error_addr)
			*error_addr = ft_iterator_error_bad_operation();
		return (false);
	}
	return (it->handler->equal(it, to_compare, error_addr));
}
