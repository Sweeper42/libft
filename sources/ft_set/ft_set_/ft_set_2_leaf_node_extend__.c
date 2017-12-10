/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_2_leaf_node_extend__.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 12:47:58 by nelson            #+#    #+#             */
/*   Updated: 2017/12/10 13:46:27 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_/ft_set_.h"

int		ft_set_2_leaf_node_extend__(
			t_s_set_leaf_node *ps_to_extend,
			void const *pcov_elem_to_add,
			t_var_handler_c *pcos_elem_handler,
			t_error_c **hcos_error)
{
	int		id_elem;

	id_elem = pcos_elem_handler->cmp(
		pcov_elem_to_add, ps_to_extend->arpcov_elem[0]);
	if (id_elem == 0)
	{
		ft_error_set_to(hcos_error, ft_set_error_duplicate_elem());
		return (-1);
	}
	else if (id_elem < 0)
	{
		ps_to_extend->arpcov_elem[2] = ps_to_extend->arpcov_elem[0];
		ps_to_extend->arpcov_elem[0] = pcov_elem_to_add;
	}
	else
		ps_to_extend->arpcov_elem[2] = pcov_elem_to_add;
	ps_to_extend->bf_info.e_type = set_node_type_3_node;
	return (0);
}
