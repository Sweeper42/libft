/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_it_value.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 15:25:47 by nperrin           #+#    #+#             */
/*   Updated: 2017/10/22 18:56:41 by nelson           ###   ########.fr       */
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
		|| (it->data1 == &list->first))
	{
		if (error_addr)
			*error_addr = ft_iterator_error_no_value();
		return (NULL);
	}
	return (((t_list_elem *)it->data1)->value);
}
