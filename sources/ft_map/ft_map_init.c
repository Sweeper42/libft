/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 16:07:14 by nperrin           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2017/10/22 17:35:51 by nelson           ###   ########.fr       */
=======
/*   Updated: 2017/11/13 14:24:35 by nperrin          ###   ########.fr       */
>>>>>>> c0792a7f136388f5dbef201ce19c35d21daa6b52
/*                                                                            */
/* ************************************************************************** */

#include "ft_map.h"

static int	check_handler___(
				t_map *r_map,
<<<<<<< HEAD
				t_map_elem_handler elem_handler,
				t_error_c **rrc_error);
=======
				t_var_handler_c *rc_handler,
				t_error_c **rrc_error)
>>>>>>> c0792a7f136388f5dbef201ce19c35d21daa6b52
{
	if ((FT_MAP_IS_BY_VALUE(*to_init)
		&& (!elem_handler.rc_value_handler->dup || !elem_handler.rc_value_handler->delete))
		||
		(FT_MAP_KEY_IS_BY_VALUE(*to_init)
		&& (!elem_handler.rc_key_handler->dup || !elem_handler.rc_key_handler->delete)))
	{
		if (rrc_handler)
			*rrc_handler = ft_map_error_invalid_init();
		return (-1);
	}
<<<<<<< HEAD
	if (!elem_handler.rc_key_handler->cmp)
=======
	if (!rc_handler->cmp)
>>>>>>> c0792a7f136388f5dbef201ce19c35d21daa6b52
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
				t_map_elem_handler elem_handler,
				t_error_c **rrc_error)
{
	r_map->flags = flags;
	if (check_handler___(r_map, elem_handler, rrc_error) == -1)
		return (-1);
	r_map->elem_handler = elem_handler;
	r_map->leave->r_rchild = NULL;
	r_map->leave->r_lchild = NULL;
	r_map->r_root = &r_map->leave;
	r_map->size = 0;
	return (0);
}
