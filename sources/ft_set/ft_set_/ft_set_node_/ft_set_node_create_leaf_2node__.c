/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_node_create_leaf_2node__.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 12:17:15 by nperrin           #+#    #+#             */
/*   Updated: 2018/01/18 12:24:10 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_node_.h"
#include "ft_mem.h"

t_s_set_leaf_node			*ft_set_node_create_leaf_2node__(
								void const *pcov_elem,
								t_u_set_node *pu_parent,
								t_error_c **hcos_error)
{
	t_s_set_leaf_node		*ps_node;

	if (!(ps_node = ft_memalloc(sizeof(t_s_set_leaf_node), hcos_error)))
		return (NULL);
	ps_node->bf_info = {true, set_node_type_2_node};
	ps_node->pu_parent = pu_parent;
	ps_node->arpcov_elem[0] = pcov_elem;
	return (ps_node);
}
