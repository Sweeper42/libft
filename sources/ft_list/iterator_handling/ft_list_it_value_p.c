/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_it_value_p.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 12:02:39 by nelson            #+#    #+#             */
/*   Updated: 2017/10/10 12:04:19 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		*ft_list_it_value_p(
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
	return (&((t_list_elem *)it->data1)->value);
}
