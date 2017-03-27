/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_it_rmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 13:42:43 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/27 14:03:14 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_iterator.h"

inline t_iterator		*ft_it_rmove(
							t_iterator *it,
							t_error_c **error_addr)
{
	if (!it->handler->rmove)
	{
		if (error_addr)
			*error_addr = ft_iterator_error_bad_operation();
		return (NULL);
	}
	return (it->handler->rmove(it, error_addr));
}
