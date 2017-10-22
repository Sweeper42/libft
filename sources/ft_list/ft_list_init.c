/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 18:44:51 by nperrin           #+#    #+#             */
/*   Updated: 2017/10/10 16:13:41 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int			ft_list_init(
				t_list *to_init,
				uint8_t flags,
				t_var_handler_c *handler,
				t_error_c **error_addr)
{
	to_init->flags = flags;
	to_init->handler = handler;
	if (FT_LIST_IS_BY_VALUE(*to_init)
		&& (!handler->dup || !handler->delete))
	{
		if (error_addr)
			*error_addr = ft_list_error_invalid_ref(); 
		return (-1);
	}
	to_init->size = 0;
	to_init->first = (t_list_elem){NULL, &to_init->last, &to_init->first};
	to_init->last = (t_list_elem){&to_init->first, NULL, &to_init->last};
	return (0);
}
