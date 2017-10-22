/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 12:16:00 by nelson            #+#    #+#             */
/*   Updated: 2017/10/11 17:40:36 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int			ft_list_remove(
			t_list		*list,
			t_iterator	*to_remove,
			t_error_c	**error_addr)
{
	t_list_elem		*to_del;

	to_del = (t_list_elem *)to_remove->data1;
	if ((to_remove->container != list)
		|| (to_del == &list->first)
		|| (to_del == &list->last))
	{
		if (error_addr)
			*error_addr = ft_list_error_bad_iterator();
		return (-1);
	}
	if (FT_LIST_IS_BY_VALUE(*list)
		&& (list->handler->delete(to_del->value, error_addr) == -1))
		return (-1);
	to_del->prev->next = to_del->next;
	to_del->next->prev = to_del->prev;
	*to_remove = ft_it_next(to_remove, error_addr);
	free(to_del);
	list->size--;
	return ((error_addr && *error_addr) ? -1 : 0);
}
