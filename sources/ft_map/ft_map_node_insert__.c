/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_node_insert__.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 10:04:24 by nelson            #+#    #+#             */
/*   Updated: 2017/10/28 13:52:45 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map.h"
#include <stdlib.h>

static int			alloc_node___(
						t_map_node **rp_to_alloc
						t_map_node *r_where,
						t_error_c **rrc_error)
{
	uint8_t		n_data;

	if (r_where->n_elem >= 3)
	{
		if (rrc_error)
			*rrc_error = ft_map_error_large_node();
		return (-1);
	}
	n_data = r_where->n_elem + 1;
	if (r_where->have_child)
		n_data += r_where->n_elem + 2;
	
	if (!(*rp_to_alloc = (t_map_node *)malloc(
		sizeof(t_map_node) + n_data * sizeof(void *))))
	{
		if (rrc_error)
			*rrc_error = ft_error_bad_alloc();
		return (-1);
	}
	return (0);
}

static void			fill_a_elem___(
						t_var_handler_c *key_handler,
						t_map_node *r_where,
						t_map_node *r_node,
						t_map_elem to_insert)
{
	uint8_t		i;
	uint8_t		j;

	i = 0;
	while ((key_handler->cmp(to_insert.key,
			ft_map_node_rrelem(r_where, i)->key) <= 0)
		&& (i < r_where->n_elem))
	{
		*ft_map_node_rrelem(r_node, i) = *ft_map_node_rrelem(r_where, i);
		i++;
	}
	j = i;
	*ft_map_node_rrelem(r_node, j++) = to_insert;
	while (j < r_node->n_elem)
		*ft_map_node_rrelem(r_node, j++) = *ft_map_node_rrelem(r_where, i++);
}

static void			fill_ar_child___(
						t_var_handler_c *key_handler,
						t_map_node *r_where,
						t_map_node *r_node)
{
	uint8_t		where_child_idx;
	uint8_t		node_child_idx;
	t_map_node	*r_cur_child;
	uint8_t		elem_idx;

	where_child_idx = 0;
	while (where_child_idx < r_where->n_elem + 1)
	{
		r_cur_child = *ft_map_node_rrchild(r_where, where_child_idx);
		
	}
}

static void			fill_node___(
						t_var_handler_c *key_handler,
						t_map_node *r_where,
						t_map_node *r_node,
						t_map_elem to_insert)
{


	r_node->r_parent = r_where->r_parent;
	r_node->n_elem = r_where->n_elem + 1;
	r_node->have_child = r_where->have_child;
	fill_elem___(key_handler, r_where, r_node, to_insert);
	if (r_node->have_child)
		fi
}

int					ft_map_node_insert_elem__(
						t_map_c *rc_map,
						t_map_elem to_insert,
						t_map_node **rp_where,
						t_error_c **rrc_error)
{
	t_map_node		*tmp;

	if (alloc_node___(&tmp, *rp_where, rrc_error) < 0)
		return (-1);
	if (ft_map_create_elem__(rc_map, to_insert, &to_insert, rrc_error) < 0)
	{
		free(tmp);
		return (-1);
	}
	return (0);
}