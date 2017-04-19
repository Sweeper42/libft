/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 19:09:14 by nperrin           #+#    #+#             */
/*   Updated: 2017/04/19 15:33:24 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int			ft_list_push_front(
				t_list *list,
				void *value,
				t_error_c **error_addr)
{
	t_list_elem		*elem;

	if (!(elem = ft_list_create_elem(list, value, error_addr)))
		return (-1);
	elem->prev = &list->first;
	elem->next = list->first.next;
	list->first.next->prev = elem;
	list->first.next = elem;
	list->size++;
	return (0);
}
