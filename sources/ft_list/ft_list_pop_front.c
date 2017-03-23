/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_pop_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 19:18:37 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/23 19:24:51 by nperrin          ###   ########.fr       */
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

int					ft_list_pop_front(
						t_list *list,
						t_bool delete_value,
						t_error_c **error_addr)
{
	t_list_elem		*to_del;

	if (check_param___(list, delete_value, error_addr) == -1)
		return (-1);
	to_del = list->first.next;
	if (delete_value
		&& (list->handler->delete(to_del->value, error_addr) == -1))
		return (-1);
	list->first.next = to_del->next;
	to_del->next->prev = &list->first;
	free(to_del);
	list->size--;
	return (0);
}
