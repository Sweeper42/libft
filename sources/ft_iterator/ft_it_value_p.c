/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_it_value_p.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 11:59:43 by nelson            #+#    #+#             */
/*   Updated: 2017/10/10 11:59:57 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_iterator.h"

inline void		*ft_it_value_p(
					t_iterator *it,
					t_error_c **error_addr)
{
	if (!it->handler->value_p)
	{
		if (error_addr)
			*error_addr = ft_iterator_error_bad_operation();
		return (NULL);
	}
	return (it->handler->value_p(it, error_addr));
}
