/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_it_value.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 15:25:47 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/27 15:28:34 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		*ft_list_it_value(
				t_iterator *it,
				t_error_c **error_addr)
{
	t_list	*list;

	list = it->container;
	if ((it->data1 == &list->last)
		|| (it->data2 == &list->first))
	{
		*error_addr = ft_iterator_error_no_value();
		return (NULL);
	}
	return (((t_list_elem *)it->data1)->value);
}
