/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_it_next.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 13:33:45 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/27 13:45:42 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_iterator.h"

inline t_iterator		ft_it_next(
							t_iterator_c *it,
							t_error_c **error_addr)
{
	if (!it->handler->next)
	{
		if (error_addr)
			*error_addr = ft_iterator_error_bad_operation();
		return ((t_iterator){NULL, NULL, NULL, NULL});
	}
	return (it->handler->next(it, error_addr));
}
