/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_pop_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 19:18:37 by nperrin           #+#    #+#             */
/*   Updated: 2017/10/10 13:48:00 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int					ft_list_pop_front(
						t_list *list,
						t_error_c **error_addr)
{
	t_list_elem		*to_del;

	to_del = list->first.next;
	if (FT_LIST_IS_BY_VALUE(*list)
		&& (list->handler->delete(to_del->value, error_addr) == -1))
		return (-1);
	list->first.next = to_del->next;
	to_del->next->prev = &list->first;
	free(to_del);
	list->size--;
	return (0);
}
