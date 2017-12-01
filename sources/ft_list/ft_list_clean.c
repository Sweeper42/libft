/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clean.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 18:52:25 by nperrin           #+#    #+#             */
/*   Updated: 2017/12/01 11:12:24 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int					ft_list_clean(
						t_list *list,
						t_error_c **error_addr)
{
	t_list_elem	*cur;
	t_list_elem	*prev;

	cur = list->first.next;
	prev = NULL;
	while ((cur != &list->last) && cur)
	{
		if (FT_LIST_IS_BY_VALUE(*list) &&
			(list->handler->destroy(cur->value, error_addr) == -1))
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
