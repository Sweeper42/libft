/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_it_value.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 18:52:15 by nelson            #+#    #+#             */
/*   Updated: 2017/10/22 18:59:40 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map.h"

void	*ft_map_it_value(
			t_iterator *r_it,
			t_error_c **error_addr)
{
	t_map		*r_map;
	t_map_node	*r_node;

	r_map = r_it->container;
	r_node = r_it->data1;
	if (r_node == &r_map->leave)
	{
		if (error_addr)
			*error_addr = ft_iterator_error_no_value();
		return (NULL);
	}
	return (&r_node->elem)
}
