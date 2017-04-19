/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_dup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 15:11:33 by nperrin           #+#    #+#             */
/*   Updated: 2017/04/19 16:01:54 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int				ft_list_dup(
					t_list_c *list,
					t_list **target,
					t_error_c **error_addr)
{
	t_list_elem		*cur_dst;
	t_list_elem		*cur_src;
	t_list			*copy;

	*target = NULL;
	if (!(copy = ft_list_new(list->handler, error_addr)))
		return (-1);
	copy->copy_on = list->copy_on;
	cur_dst = &copy->first;
	cur_src = list->first.next;
	while ((cur_src != &list->last) && cur_src)
	{
		if (!(cur_dst->next = ft_list_create_elem(copy, cur_src->value,
								error_addr)))
		{
			ft_list_delete(copy, true, NULL);
			return (-1);
		}
		cur_src = cur_src->next;
		cur_dst = cur_dst->next;
	}
	cur_dst->next = &copy->last;
	copy->last.prev = cur_dst;
	return (0);
}
