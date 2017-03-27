/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 19:03:32 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/27 16:11:00 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int			ft_list_push_back(
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
	new->next = &list->last;
	new->prev = list->last.prev;
	list->last.prev->next = new;
	list->last.prev = new;
	list->size++;
	return (0);
}
