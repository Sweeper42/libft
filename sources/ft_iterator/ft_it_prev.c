/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_it_prev.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 13:39:18 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/27 14:03:27 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_iterator.h"

inline t_iterator		ft_it_prev(
							t_iterator_c *it,
							t_error_c **error_addr)
{
	if (!it->handler->prev)
	{
		if (error_addr)
			*error_addr = ft_iterator_error_bad_operation();
		return ((t_iterator){NULL, NULL, NULL, NULL});
	}
	return (it->handler->prev(it, error_addr));
}
