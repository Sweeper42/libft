/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 19:03:32 by nperrin           #+#    #+#             */
/*   Updated: 2017/04/19 15:34:08 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int			ft_list_push_back(
				t_list *list,
				void *value,
				t_error_c **error_addr)
{
	t_list_elem		*elem;

	if (!(elem = ft_list_create_elem(list, value, error_addr)))
		return (-1);
	elem->next = &list->last;
	elem->prev = list->last.prev;
	list->last.prev->next = elem;
	list->last.prev = elem;
	list->size++;
	return (0);
}
