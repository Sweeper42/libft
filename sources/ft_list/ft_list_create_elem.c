/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_create_elem.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 15:16:07 by nperrin           #+#    #+#             */
/*   Updated: 2017/04/19 15:32:19 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

static inline int		dup_value___(
							void const *value,
							void **target,
							t_var_handler_c *handler,
							t_error_c **error_addr)
{
	*target = NULL;
	if (!handler->dup)
	{
		if (error_addr)
			*error_addr = ft_error_no_dup();
		return (-1);
	}
	if (handler->dup(value, target, error_addr) == -1)
		return (-1);
}

inline t_list_elem		*ft_list_create_elem(
							t_list_c *list,
							void *value,
							t_error_c **error_addr)
{
	t_list_elem		*elem;

	if (!(elem = malloc(sizeof(t_list_elem))))
	{
		if (*error_addr)
			*error_addr = ft_error_bad_alloc();
		return (-1);
	}
	if (list->copy_on)
	{
		if (dup_value___(value, &elem->value, list->handler, error_addr) == -1)
		{
			free(elem);
			return (-1);
		}
	}
	else
		elem->value = value;
	elem->prev = NULL;
	elem->next = NULL;
	return (elem);
}
