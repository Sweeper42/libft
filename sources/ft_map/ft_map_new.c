/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 16:20:09 by nperrin           #+#    #+#             */
/*   Updated: 2017/10/22 17:30:40 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map.h"
#include <stdlib.h>

t_map		*ft_map_new(
				uint8_t flags,
				t_map_elem_handler elem_handler,
				t_error_c **rrc_error)
{
	t_map	*map;

	if (!(map = malloc(sizeof(t_map))))
	{
		if (rrc_error)
			*rrc_error = ft_error_bad_alloc();
	}
	if (ft_map_init(map, flags, elem_handler, rrc_error) == -1)
	{
		free(map);
		return (NULL);
	}
	return (map);
}
