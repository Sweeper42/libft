/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_it_next.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 19:00:07 by nelson            #+#    #+#             */
/*   Updated: 2017/10/22 19:14:06 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map.h"

t_iterator		ft_map_it_next(
				t_iterator_c *r_it,
				t_error_c **error_addr)
{
	t_map		*r_map;
	t_map_node	*cur_node;

	r_map = r_it->container;
	cur_node = r_it->data1;
	if (cur_node->r_child != &r_map->leave)
	{
		cur_node = cur_node->r_rchild;
		while (cur_node->r_lchild != &r_map->leave)
			cur_node = cur_node->r_lchild;
		return (FT_ITERATOR_CREATE(r_it->handler, r_map, cur_node, NULL));
	}
	
}
