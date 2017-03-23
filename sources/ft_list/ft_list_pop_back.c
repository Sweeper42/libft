/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_pop_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 19:13:38 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/23 19:25:51 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

static inline int	check_param___(
						t_list_c *list,
						t_bool delete_value,
						t_error_c **error_addr)
{
	if (delete_value && !list->handler->delete)
	{
		if (error_addr)
			*error_addr = ft_list_error_no_delete();
		return (-1);
	}
	if (list->size == 0)
	{
		if (error_addr)
			*error_addr = ft_list_error_list_empty();
		return (-1);
	}
	return (0);
}

int					ft_list_pop_back(
						t_list *list,
						t_bool delete_value,
						t_error_c **error_addr)
{
	t_list_elem		*to_del;

	if (check_param___(list, delete_value, error_addr) == -1)
		return (-1);
	to_del = list->last.prev;
	if (delete_value
		&& (list->handler->delete(to_del->value, error_addr) == -1))
		return (-1);
	list->last.prev = to_del->prev;
	to_del->prev->next = &list->last;
	free(to_del);
	list->size--;
	return (0);
}
