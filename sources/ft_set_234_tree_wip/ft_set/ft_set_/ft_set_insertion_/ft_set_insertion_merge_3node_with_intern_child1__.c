/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_insertion_merge_3node_with_intern_child1__.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 15:31:40 by nperrin           #+#    #+#             */
/*   Updated: 2018/01/23 15:34:56 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_/ft_set_insertion_.h"

int		ft_set_insertion_merge_3node_with_intern_child1__(
			t_s_set_intern_node *ps_cur_node,
			t_error_c **hcos_error)
{
	t_s_set_intern_node	*ps_mid_left_child;
	t_s_set_intern_node	*ps_mid_right_child;

	ps_mid_left_child = &ps_cur_node->arpu_child[1]->s_intern_node;
	if (!(ps_mid_right_child = ft_set_node_create_intern_2node__(
		ps_mid_left_child->arpcov_elem[2],
		(t_u_set_node *[2]){
			ps_mid_left_child->arpu_child[2],
			ps_mid_left_child->arpu_child[3]
		},
		(t_u_set_node *)ps_cur_node,
		hcos_error)))
		return (-1);
	ps_cur_node->arpcov_elem[1] = ps_mid_left_child->arpcov_elem[1];
	ps_cur_node->arpu_child[2] = (t_u_set_node *)ps_mid_right_child;
	ps_cur_node->bf_info.e_type = set_node_type_4_node;
	ps_mid_left_child->arpu_child[3] = ps_mid_left_child->arpu_child[1];
	ps_mid_left_child->bf_info.e_type = set_node_type_2_node;
	return (0);
}
