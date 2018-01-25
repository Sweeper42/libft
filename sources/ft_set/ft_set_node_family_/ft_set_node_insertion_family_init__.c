/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_node_insertion_family_init__.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 17:02:18 by nperrin           #+#    #+#             */
/*   Updated: 2018/01/24 17:12:59 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_/ft_set_node_family_.h"

void	ft_set_node_insertion_family_init__(
			t_s_set_node_insertion_family *ps_family,
			t_s_set_node *ps_node)
{
	t_s_set_node	*ps_parent;

	ps_parent = ps_node->ps_parent;
	ps_family->ps_node = ps_node;
	ps_family->ps_parent = ps_parent;
	if (ps_parent)
	{
		ps_family->ps_grand_parent = ps_parent->ps_parent;
		if (ps_family->ps_grand_parent->ps_right_child == ps_parent)
			ps_family->ps_uncle = ps_family->ps_grand_parent->ps_left_child;
		else
			ps_family->ps_uncle = ps_family->ps_grand_parent->ps_right_child;
	}
	else
	{
		ps_family->ps_grand_parent = NULL;
		ps_family->ps_uncle = NULL;
	}
}
