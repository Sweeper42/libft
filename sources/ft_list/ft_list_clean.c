/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clean.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 18:52:25 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/27 16:03:38 by nperrin          ###   ########.fr       */
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
	return (0);
}

int					ft_list_clean(
						t_list *list,
						t_bool delete_value,
						t_error_c **error_addr)
{
	t_list_elem	*cur;
	t_list_elem	*prev;

	if (check_param___(list, delete_value, error_addr) == -1)
		return (-1);
	cur = list->first.next;
	prev = NULL;
	while (cur != &list->last)
	{
		if (delete_value &&
			(list->handler->delete(cur->value, error_addr) == -1))
			return (-1);
		prev = cur;
		cur = cur->next;
		free(prev);
		list->size--;
	}
	list->first.next = &list->last;
	list->last.prev = &list->first;
	list->size = 0;
	return (0);
}
