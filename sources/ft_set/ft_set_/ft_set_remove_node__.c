/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_remove_node__.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 16:05:42 by nperrin           #+#    #+#             */
/*   Updated: 2018/01/25 16:06:05 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_/ft_set_.h"

static t_s_set_node		*set_find_suitable_node_for_swap___(
							t_s_set_node	*ps_node)
{
	if (!ps_node->ps_right_child)
		return (ps_node);
	else if (!ps_node->ps_left_child)
		return (ps_node);
	ps_node = ps_node->ps_right_child;
	while (ps_node->ps_left_child)
		ps_node = ps_node->ps_left_child;
	return (ps_node);
}

int						ft_set_remove_node__(
							t_s_set			*ps_set,
							t_s_set_node	*ps_node_to_remove)
{
	t_s_set_node	*ps_replacment_node;

	ps_replacment_node = set_find_suitable_node_for_swap___(ps_node_to_remove);
	if (ps_node_to_remove != ps_replacment_node)
		ft_swap_ptr(
			(void **)&ps_node_to_remove->ps_value,
			(void **)&ps_replacment_node->ps_value);
	if (ps_replacment_node->bl_is_red)
		ps_replacment_node
	return (0);
}
