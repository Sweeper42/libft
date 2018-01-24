/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_insertion_extend_leaf_root__.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 12:13:23 by nperrin           #+#    #+#             */
/*   Updated: 2018/01/23 12:06:35 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_/ft_set_insertion_.h"
#include <stdlib.h>

int		ft_set_insertion_extend_leaf_root__(
			t_u_set_node **hu_root,
			t_error_c **hcos_error)
{
	t_s_set_leaf_node	*ps_right_child;
	t_s_set_intern_node	*ps_new_root;

	if (!(ps_right_child = ft_set_node_create_leaf_2node__(
		(*hu_root)->s_leaf_node.arpcov_elem[2],
		NULL,
		hcos_error)))
		return (-1);
	if (!(ps_new_root = ft_set_node_create_intern_2node__(
		(*hu_root)->s_leaf_node.arpcov_elem[1],
		(t_u_set_node *[2]){*hu_root, (t_u_set_node *)ps_right_child},		
		NULL,
		hcos_error)))
	{
		free(ps_right_child);
		return (-1);
	}
	ps_right_child->pu_parent = (t_u_set_node *)ps_new_root;
	(*hu_root)->bf_info.e_type = set_node_type_2_node;
	(*hu_root)->s_intern_node.pu_parent = (t_u_set_node *)ps_new_root;
	*hu_root = (t_u_set_node *)ps_new_root;
	return (0);
}
