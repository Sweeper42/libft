/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_3_leaf_node_extend__.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 13:05:25 by nelson            #+#    #+#             */
/*   Updated: 2017/12/10 13:45:48 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_/ft_set_.h"

static inline int	insert_before_first___(
						t_s_set_leaf_node *ps_leaf_to_extend,
						void const *pcov_elem_to_add,
						t_var_handler_c *pcos_elem_handler,
						t_error_c **hcos_error)
{
	int		id_elem;

	id_elem = pcos_elem_handler->cmp(
		pcov_elem_to_add, ps_leaf_to_extend->arpcov_elem[0]);
	if (id_elem == 0)
	{
		ft_error_set_to(hcos_error, ft_set_error_duplicate_elem());
		return (-1);
	}
	else if (id_elem < 0)
	{
		ps_leaf_to_extend->arpcov_elem[1] = ps_leaf_to_extend->arpcov_elem[0];
		ps_leaf_to_extend->arpcov_elem[0] = pcov_elem_to_add;
		ps_leaf_to_extend->bf_info.e_type = set_node_type_4_node;
		return (1);
	}
	return (0);
}

static inline int	insert_around_second___(
						t_s_set_leaf_node *ps_leaf_to_extend,
						void const *pcov_elem_to_add,
						t_var_handler_c *pcos_elem_handler,
						t_error_c **hcos_error)
{
	int		id_elem;

	id_elem = pcos_elem_handler->cmp(
		pcov_elem_to_add, ps_leaf_to_extend->arpcov_elem[2]);
	if (id_elem == 0)
	{
		ft_error_set_to(hcos_error, ft_set_error_duplicate_elem());
		return (-1);
	}
	else if (id_elem > 0)
	{
		ps_leaf_to_extend->arpcov_elem[1] = ps_leaf_to_extend->arpcov_elem[2];
		ps_leaf_to_extend->arpcov_elem[2] = pcov_elem_to_add;
	}
	else
		ps_leaf_to_extend->arpcov_elem[1] = pcov_elem_to_add;
	ps_leaf_to_extend->bf_info.e_type = set_node_type_4_node;
	return (0);
}

int					ft_set_3_leaf_node_extend__(
						t_s_set_leaf_node *ps_to_extend,
						void const *pcov_elem_to_add,
						t_var_handler_c *pcos_elem_handler,
						t_error_c **hcos_error)
{
	int		i_ret;

	i_ret = insert_before_first___(
		ps_to_extend,
		pcov_elem_to_add,
		pcos_elem_handler,
		hcos_error);
	if (i_ret < 0)
		return (-1);
	else if (i_ret > 0)
		return (0);
	i_ret = insert_around_second___(
		ps_to_extend,
		pcov_elem_to_add,
		pcos_elem_handler,
		hcos_error);
	return (i_ret);
}
