/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_2_leaf_node_create__.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 19:33:09 by nelson            #+#    #+#             */
/*   Updated: 2017/12/09 21:20:59 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_/ft_set_.h"
#include "ft_mem.h"

t_u_set_node	*ft_set_2_leaf_node_create__(
					t_u_set_node *pu_parent,
					void const *pcov_elem_to_add,
					t_error_c **hcos_error)
{
	t_s_set_leaf_node	*ps_new_leaf_2_node;

	ps_new_leaf_2_node =
		(t_s_set_leaf_node *)ft_memalloc(
			sizeof(t_s_set_intern_node),
			hcos_error);
	if (ps_new_leaf_2_node)
		(*ps_new_leaf_2_node) = (t_s_set_leaf_node)
		{
			{
				1,
				set_node_type_2_node
			},
			pu_parent,
			{
				pcov_elem_to_add,
				NULL,
				NULL
			}
		};
	return ((t_u_set_node *)ps_new_leaf_2_node);
}
