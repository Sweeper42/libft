/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_it_rmove.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 15:25:19 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/27 15:25:35 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_iterator		*ft_list_it_rmove(
					t_iterator *it,
					t_error_c **error_addr)
{
	if (it->data1 == &((t_list *)it->container)->first)
	{
		if (error_addr)
			*error_addr = ft_iterator_error_out_of_bound();
		return (NULL);
	}
	it->data1 = ((t_list_elem *)it->data1)->prev;
	return (it);
}
