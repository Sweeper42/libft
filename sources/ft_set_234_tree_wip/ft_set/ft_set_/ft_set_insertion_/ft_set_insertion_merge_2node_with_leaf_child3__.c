/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_insertion_merge_2node_with_leaf_child3__.c  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 11:24:24 by nperrin           #+#    #+#             */
/*   Updated: 2018/01/23 12:13:21 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_/ft_set_insertion_.h"

int		ft_set_insertion_merge_2node_with_leaf_child3__(
			t_s_set_intern_node *ps_cur_node,
			t_error_c **hcos_error)
{
	t_s_set_leaf_node	*ps_mid_child;
	t_s_set_leaf_node	*ps_right_child;

	ps_right_child = &ps_cur_node->arpu_child[3]->s_leaf_node;
	if (!(ps_mid_child = ft_set_node_create_leaf_2node__(
		ps_right_child->arpcov_elem[0],
		(t_u_set_node *)ps_cur_node,
		hcos_error)))
		return (-1);
	ps_cur_node->arpcov_elem[2] = ps_right_child->arpcov_elem[1];
	ps_cur_node->arpu_child[1] = (t_u_set_node *)ps_mid_child;
	ps_cur_node->bf_info.e_type = set_node_type_3_node;
	ps_right_child->arpcov_elem[0] = ps_right_child->arpcov_elem[2];
	ps_right_child->bf_info.e_type = set_node_type_2_node;
	return (0);
}
