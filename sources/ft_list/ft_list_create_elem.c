/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_create_elem.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 15:16:07 by nperrin           #+#    #+#             */
/*   Updated: 2017/10/10 13:45:11 by nelson           ###   ########.fr       */
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
	return (0);
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
		return (NULL);
	}
	if (FT_LIST_IS_BY_VALUE(*list))
	{
		if (dup_value___(value, &elem->value, list->handler, error_addr) == -1)
		{
			free(elem);
			return (NULL);
		}
	}
	else
		elem->value = value;
	elem->prev = NULL;
	elem->next = NULL;
	return (elem);
}
