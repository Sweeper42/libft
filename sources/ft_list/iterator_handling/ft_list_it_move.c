/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_it_move.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 15:23:51 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/27 15:25:12 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_iterator		*ft_list_it_move(
					t_iterator *it,
					t_error_c **error_addr)
{
	if (it->data1 == &((t_list *)it->container)->last)
	{
		if (error_addr)
			*error_addr = ft_iterator_error_out_of_bound();
		return (NULL);
	}
	it->data1 = ((t_list_elem *)it->data1)->next;
	return (it);
}
