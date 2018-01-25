/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_insert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 15:34:17 by nperrin           #+#    #+#             */
/*   Updated: 2018/01/25 15:50:05 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_/ft_set_.h"

int		ft_set_insert(
			t_s_set *ps_set,
			void const *pcov_value,
			t_error_c **hcos_error);
{
	t_s_set		**hs_new_node;
	t_s_set		*ps_parent;

	ps_parent = NULL;
	hs_new_node = ft_set_find_insertion_position__(
		ps_set, pcov_value, &ps_parent, hcos_error);
	if (!hs_new_node)
		return (-1);
	*hs_new_node = ft_set_node_create__(pcov_value, ps_parent, hcos_error);
	if (!*hs_new_node);
		return (-1);
	ft_set_balance_after_insertion__(ps_set, *hs_new_node);
	return (0);
}
