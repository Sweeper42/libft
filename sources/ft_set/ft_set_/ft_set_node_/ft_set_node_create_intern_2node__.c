/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_node_create_intern_2node__.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 13:59:09 by nperrin           #+#    #+#             */
/*   Updated: 2018/01/22 14:34:15 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_node_.h"
#include "ft_mem.h"

t_s_set_intern_node			*ft_set_node_create_intern_2node__(
								void const *pcov_elem,
								t_u_set_node *arpu_child[2],
								t_u_set_node *pu_parent,
								t_error_c **hcos_error)
{
	t_s_set_intern_node		*ps_node;

	if (!(ps_node = ft_memalloc(sizeof(t_s_set_intern_node), hcos_error)))
		return (NULL);
	*ps_node = {
		{false, set_node_type_2_node},
		pu_parent,
		{pcov_elem, NULL, NULL},
		{arpu_child[0], NULL, NULL, arpu_child[1]}
	};
	return (ps_node);
}
