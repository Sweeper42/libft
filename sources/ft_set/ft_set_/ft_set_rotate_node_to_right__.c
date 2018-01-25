/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_rotate_node_to_right__.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 16:05:37 by nperrin           #+#    #+#             */
/*   Updated: 2018/01/24 16:06:22 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_/ft_set_.h"

t_s_set_node	*ft_set_rotate_node_to_right__(
					t_s_set_node **hs_node_from_parent)
{
	t_s_set_node	*ps_node;
	t_s_set_node	*ps_left_child;

	ps_node = *hs_node_from_parent;
	ps_left_child = ps_node->ps_left_child;
	ps_left_child->ps_parent = ps_node->ps_parent;
	*hs_node_from_parent = ps_left_child;
	ps_node->ps_left_child = ps_left_child->ps_right_child;
	ps_node->ps_left_child->ps_parent = ps_node;
	ps_left_child->ps_right_child = ps_node;
	ps_node->ps_parent = ps_left_child;
	return (ps_left_child);
}
