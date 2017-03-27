/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_it_prev.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 15:23:07 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/27 15:23:38 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_iterator			ft_list_it_prev(
						t_iterator_c *it,
						t_error_c **error_addr)
{
	if (it->data1 == &((t_list *)it->container)->first)
	{
		if (error_addr)
			*error_addr = ft_iterator_error_out_of_bound();
		return (*it);
	}
	return (FT_ITERATOR_CREATE(
		it->handler,
		(void *)it->container,
		((t_list_elem *)it->data1)->prev,
		NULL));
}
