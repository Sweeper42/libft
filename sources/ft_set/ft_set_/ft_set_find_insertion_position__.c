/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_find_insertion_position__.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 16:11:43 by nperrin           #+#    #+#             */
/*   Updated: 2018/01/25 15:44:54 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_/ft_set_.h"

t_s_set_node		**ft_set_find_insertion_position__(
						t_s_set *ps_set,
						void const *pcov_value,
						t_s_set_node **hs_parent,
						t_error_c **hcos_error)
{
	int				(*f_compare)(void const *, void const *);
	int				id_compare;
	t_s_set_node	**hs_cur_node;

	f_compare = ps_set->ps_var_handler->cmp;
	hs_cur_node = &ps_set->ps_root;
	if (hs_parent)
		*hs_parent = NULL;
	while (*hs_cur_node)
	{
		id_compare = f_compare(pcov_value, (*hs_cur_node)->pcov_value)
		if (id_compare == 0)
		{
			ft_error_set_to(hcos_error, ft_set_error_duplicate_value());
			return (NULL);
		}
		if (hs_parent)
			*hs_parent = *hs_cur_node;
		if (id_compare > 0)
			hs_cur_node = &(*hs_cur_node)->ps_right_child;
		else
			hs_cur_node = &(*hs_cur_node)->ps_left_child;
	}
	return (hs_cur_node);
}
