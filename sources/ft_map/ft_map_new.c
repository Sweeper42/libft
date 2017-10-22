/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 16:20:09 by nperrin           #+#    #+#             */
/*   Updated: 2017/10/18 16:22:48 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map.h"
#include <stdlib.h>

t_map		*ft_map_new(
				uint8_t flags,
				t_var_handler_c *rc_handler,
				t_error_c **rrc_error)
{
	t_map	*map;

	if (!(map = malloc(sizeof(t_map))))
	{
		if (rrc_error)
			*rrc_error = ft_error_bad_alloc();
	}
	if (ft_map_init(map, flags, rc_handler, rrc_error) == -1)
	{
		free(map);
		return (NULL);
	}
	return (map);
}
