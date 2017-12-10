/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_intern_node_merge_with_child__.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 17:38:05 by nelson            #+#    #+#             */
/*   Updated: 2017/12/10 17:45:20 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_/ft_set_.h"

int		ft_set_intern_node_merge_with_child__(
			t_s_set_intern_node *ps_node_parent,
			uint8_t u8ix_target_child,
			t_error_c **hcos_error)
{
	if (ps_node_parent->bf_info.e_type == set_node_type_2_node)
		return (ft_set_2_intern_node_merge_with_child__(
			ps_node_parent, u8ix_target_child, hcos_error));
	else if (ps_node_parent->bf_info.e_type == set_node_type_3_node)
		return (ft_set_3_intern_node_merge_with_child__(
			ps_node_parent, u8ix_target_child, hcos_error));
	return (-1);
}
