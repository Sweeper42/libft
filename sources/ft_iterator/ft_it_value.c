/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_it_value.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 13:43:01 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/27 14:06:02 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_iterator.h"

inline void		*ft_it_value(
					t_iterator *it,
					t_error_c **error_addr)
{
	if (!it->handler->value)
	{
		if (error_addr)
			*error_addr = ft_iterator_error_bad_operation();
		return (NULL);
	}
	return (it->handler->value(it, error_addr));
}
