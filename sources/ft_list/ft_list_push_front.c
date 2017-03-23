/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 19:09:14 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/23 19:12:12 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int			ft_list_push_front(
				t_list *list,
				void *value,
				t_error_c **error_addr)
{
	t_list_elem		*new;

	if (!(new = malloc(sizeof(t_list_elem))))
	{
		if (*error_addr)
			*error_addr = ft_error_bad_alloc();
		return (-1);
	}
	new->value = value;
	new->prev = &list->first;
	new->next = list->first.next;
	list->first.next = new;
	list->size++;
	return (0);
}