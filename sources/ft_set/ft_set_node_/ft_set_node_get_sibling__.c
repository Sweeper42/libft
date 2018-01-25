/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_node_get_sibling__.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 15:26:52 by nperrin           #+#    #+#             */
/*   Updated: 2018/01/24 15:32:28 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_/ft_set_node_.h"

inline t_s_set_node		*ft_set_node_get_sibling__(t_s_set_node *ps_node)
{
	t_s_set_node	*ps_parent;

	ps_parent = ps_node->ps_parent;
	if (!ps_parent)
		return (NULL);
	return ((ps_node == ps_parent->ps_right_child) 
		? ps_parent->ps_left_child
		: ps_parent->ps_right_child);
}
