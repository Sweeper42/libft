/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_pop_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 19:13:38 by nperrin           #+#    #+#             */
/*   Updated: 2017/10/10 13:47:46 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int					ft_list_pop_back(
						t_list *list,
						t_error_c **error_addr)
{
	t_list_elem		*to_del;

	to_del = list->last.prev;
	if (FT_LIST_IS_BY_VALUE(*list)
		&& (list->handler->delete(to_del->value, error_addr) == -1))
		return (-1);
	list->last.prev = to_del->prev;
	to_del->prev->next = &list->last;
	free(to_del);
	list->size--;
	return (0);
}
