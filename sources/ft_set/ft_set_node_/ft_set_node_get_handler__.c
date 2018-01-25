/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_node_get_handler__.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 15:54:08 by nperrin           #+#    #+#             */
/*   Updated: 2018/01/24 15:57:52 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_/ft_set_node_.h"

inline t_s_set_node		**ft_set_node_get_handler__(
							t_s_set *ps_set,
							t_s_set_node *ps_node)
{
	t_s_set_node	*ps_parent;

	ps_parent = ps_node->ps_parent;
	if (!ps_parent)
		return (&ps_set->ps_root);
	if (ps_node == ps_parent->ps_right_child)
		return (&ps_parent->ps_right_child);
	return (ps_parent->ps_left_child);
}
