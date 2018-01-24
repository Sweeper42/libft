/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_insertion_extend_intern_root__.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 14:10:50 by nperrin           #+#    #+#             */
/*   Updated: 2018/01/23 12:04:42 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_/ft_set_insertion_.h"
#include <stdlib.h>

static t_s_set_intern_node		*init_rignt_child___(
									t_u_set_node *pu_old_root,
									t_error_c **hcos_error)
{
	return (ft_set_node_create_intern_2node__(
		pu_old_root->s_intern_node.arpcov_elem[2],
		(t_u_set_node *[2]){
			pu_old_root->s_intern_node.arpu_child[2],
			pu_old_root->s_intern_node.arpu_child[3]
		},
		NULL,
		hcos_error));
}

static t_s_set_intern_node		*init_new_root___(
									t_u_set_node *pu_old_root,
									t_u_set_node *pu_right_child,
									t_error_c **hcos_error)
{
	return (ft_set_node_create_intern_2node__(
		pu_old_root->s_intern_node.arpcov_elem[1],
		(t_u_set_node *[2]){pu_old_root, pu_right_child},
		NULL,
		hcos_error));
}

int								ft_set_insertion_extend_intern_root__(
									t_u_set_node **hu_root,
									t_error_c **hcos_error)
{
	t_s_set_intern_node	*ps_right_child;
	t_s_set_intern_node	*ps_new_root;

	if (!(ps_right_child = init_rignt_child___(*hu_root, hcos_error)))
		return (-1);
	if (!(ps_new_root = init_new_root___(
		*hu_root, (t_u_set_node *)ps_right_child, hcos_error)))
	{
		free(ps_right_child);
		return (-1);
	}
	ps_right_child->pu_parent = (t_u_set_node *)ps_new_root;
	(*hu_root)->s_intern_node.arpu_child[3] =
		(*hu_root)->s_intern_node.arpu_child[1];
	(*hu_root)->bf_info.e_type = set_node_type_2_node;
	(*hu_root)->s_intern_node.pu_parent = (t_u_set_node *)ps_new_root;
	*hu_root = (t_u_set_node *)ps_new_root;
	return (0);
}
