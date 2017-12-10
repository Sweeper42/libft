/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_2_intern_node_create__.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 12:42:46 by nelson            #+#    #+#             */
/*   Updated: 2017/12/10 13:57:19 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_/ft_set_.h"
#include "ft_mem.h"

t_u_set_node	*ft_set_2_intern_node_create__(
					t_u_set_node *pu_parent,
					t_u_set_node (*arp_child)[2],
					void const *pcov_elem_to_add,
					t_error_c **hcos_error)
{
	t_s_set_intern_node	*ps_new_intern_2_node;

	ps_new_intern_2_node =
		(t_s_set_intern_node *)ft_memalloc(
			sizeof(t_s_set_intern_node),
			hcos_error);
	if (ps_new_intern_2_node)
		*ps_new_intern_2_node = (t_s_set_intern_node)
		{
			{0, set_node_type_2_node},
			pu_parent,
			{
				pcov_elem_to_add,
				NULL,
				NULL
			},
			{
				arp_child[0],
				NULL,
				NULL,
				arp_child[1]
			}
		};
	return ((t_u_set_node *)ps_new_intern_2_node);
}
