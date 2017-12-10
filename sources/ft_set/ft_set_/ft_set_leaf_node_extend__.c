/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_leaf_node_extend__.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 13:20:57 by nelson            #+#    #+#             */
/*   Updated: 2017/12/10 13:47:03 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_/ft_set_.h"

inline int	ft_set_leaf_node_extend__(
				t_s_set_leaf_node *ps_to_extend,
				void const *pcov_elem_to_add,
				t_var_handler_c *pcos_elem_handler,
				t_error_c **hcos_error)
{
	if (ps_to_extend->bf_info.e_type == set_node_type_2_node)
		return (ft_set_2_leaf_node_extend__(
			ps_to_extend,
			pcov_elem_to_add,
			pcos_elem_handler,
			hcos_error));
	else if (ps_to_extend->bf_info.e_type == set_node_type_3_node)
		return (ft_set_3_leaf_node_extend__(
			ps_to_extend,
			pcov_elem_to_add,
			pcos_elem_handler,
			hcos_error));
	ft_error_set_to(hcos_error, ft_set_error_extending_4_leaf_node());
	return (-1);
}
