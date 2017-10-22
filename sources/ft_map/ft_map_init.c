/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 16:07:14 by nperrin           #+#    #+#             */
/*   Updated: 2017/10/22 17:03:37 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map.h"

static int	check_handler___(
				t_map *r_map,
				t_var_handler_c *rc_handler,
				t_error_c **rrc_error);
{
	if (FT_MAP_IS_BY_VALUE(*to_init)
		&& (!rc_handler->dup || !rc_handler->delete))
	{
		if (rrc_handler)
			*rrc_handler = ft_map_error_invalid_init(); 
		return (-1);
	}
	if (!rc_handler->cmp)
	{
		if (rrc_handler)
			*rrc_handler = ft_map_error_no_relop(); 
		return (-1);
	}
	return (0);
}

int			ft_map_init(
				t_map *r_map,
				uint8_t flags,
				t_var_handler_c *rc_handler,
				t_error_c **rrc_error)
{
	r_map->flags = flags;
	if (check_handler___(r_map, rc_handler, rrc_error) == -1)
		return (-1);
	r_map->rc_handler = rc_handler;
	r_map->leave->r_rchild = NULL;
	r_map->leave->r_lchild = NULL;
	r_map->r_root = &r_map->leave;
	r_map->size = 0;
	return (0);
}
