/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_3_intern_node_merge_with_child__.c          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 16:12:26 by nelson            #+#    #+#             */
/*   Updated: 2017/12/10 17:41:54 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_/ft_set_.h"
#include <stdlib.h>

static void		merge_with_left_child___(
					t_s_set_intern_node	*ps_node_parent)
{
	t_s_set_intern_node		*ps_target_child;

	ps_target_child = &ps_node_parent->arpu_child[0]->s_intern_node;
	ps_node_parent->arpcov_elem[1] = ps_node_parent->arpcov_elem[0];
	ps_node_parent->arpcov_elem[0] = ps_target_child->arpcov_elem[0];
	ps_node_parent->arpu_child[2] = ps_node_parent->arpu_child[1];
	ps_node_parent->arpu_child[0] = ps_target_child->arpu_child[0];
	ps_node_parent->arpu_child[0]->s_leaf_node.pu_parent = 
		(t_u_set_node *)ps_node_parent;
	ps_node_parent->arpu_child[1] = ps_target_child->arpu_child[3];
	ps_node_parent->arpu_child[1]->s_leaf_node.pu_parent =
		(t_u_set_node *)ps_node_parent;
	free(ps_target_child);
}

static void		merge_with_middle_child___(
					t_s_set_intern_node *ps_node_parent)
{
	t_s_set_intern_node		*ps_target_child;

	ps_target_child = &ps_node_parent->arpu_child[1]->s_intern_node;
	ps_node_parent->arpcov_elem[1] = ps_target_child->arpcov_elem[0];
	ps_node_parent->arpu_child[1] = ps_target_child->arpu_child[0];
	ps_node_parent->arpu_child[1]->s_leaf_node.pu_parent =
		(t_u_set_node *)ps_node_parent;
	ps_node_parent->arpu_child[2] = ps_target_child->arpu_child[3];
	ps_node_parent->arpu_child[2]->s_leaf_node.pu_parent =
		(t_u_set_node *)ps_node_parent;
	free(ps_target_child);
}

static void		merge_with_right_child___(
					t_s_set_intern_node *ps_node_parent)
{
	t_s_set_intern_node		*ps_target_child;

	ps_target_child = &ps_node_parent->arpu_child[3]->s_intern_node;
	ps_node_parent->arpcov_elem[1] = ps_node_parent->arpcov_elem[2];
	ps_node_parent->arpcov_elem[2] = ps_target_child->arpcov_elem[0];
	ps_node_parent->arpu_child[2] = ps_target_child->arpu_child[0];
	ps_node_parent->arpu_child[2]->s_leaf_node.pu_parent =
		(t_u_set_node *)ps_node_parent;
	ps_node_parent->arpu_child[3] = ps_target_child->arpu_child[3];
	ps_node_parent->arpu_child[3]->s_leaf_node.pu_parent =
		(t_u_set_node *)ps_node_parent;
	free(ps_target_child);
}

int				ft_set_3_intern_node_merge_with_child__(
					t_s_set_intern_node *ps_node_parent,
					uint8_t u8ix_target_child,
					t_error_c **hcos_error)
{
	if (u8ix_target_child == 0)
		merge_with_left_child___(ps_node_parent);
	else if (u8ix_target_child == 1)
		merge_with_middle_child___(ps_node_parent);
	else if (u8ix_target_child == 3)
		merge_with_right_child___(ps_node_parent);
	else
	{
		ft_error_set_to(hcos_error, ft_set_error_merge_with_invalid_child());
		return (-1);
	}
	return (0);
}
