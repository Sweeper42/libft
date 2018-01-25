/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_balance_after_insertion__.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 16:39:43 by nperrin           #+#    #+#             */
/*   Updated: 2018/01/25 15:02:34 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_/ft_set_.h"
#include "ft_swap.h"

static void		set_balance_uncle_is_red___(
					t_s_set_insertion_family *ps_family)
{
	ps_family->ps_parent->bl_is_red = false;
	ps_family->ps_uncle->bl_is_red = false;
	ps_family->ps_grand_parent->bl_is_red = true;
	ps_family->ps_node = ps_family->ps_uncle;
}

static void		set_balance_grand_parent_on_right___(
					t_s_set_insertion_family *ps_family,
					t_s_set *ps_set)
{
	if (ps_family->ps_parent->ps_right_child == ps_family->ps_node)
	{
		ft_set_rotate_node_to_left__(&ps_family->ps_parent->ps_right_child);
		ft_swap_ptr(
			(void **)&ps_family->ps_parent,
			(void **)&ps_family->ps_node);
	}
	ps_family->ps_grand_parent->bl_is_red = true;
	ps_family->ps_parent->bl_is_red = false;
	ft_set_rotate_node_to_right__(
		ft_set_node_get_handler__(ps_set, ps_family->ps_grand_parent));
}

static void		set_balance_grand_parent_on_left___(
					t_s_set_insertion_family *ps_family,
					t_s_set *ps_set)
{
	if (ps_family->ps_parent->ps_left_child == ps_family->ps_node)
	{
		ft_set_rotate_node_to_right__(&ps_family->ps_parent->ps_left_child);
		ft_swap_ptr(
			(void **)&ps_family->ps_parent,
			(void **)&ps_family->ps_node);
	}
	ps_family->ps_grand_parent->bl_is_red = true;
	ps_family->ps_parent->bl_is_red = false;
	ft_set_rotate_node_to_left__(
		ft_set_node_get_handler__(ps_set, ps_family->ps_grand_parent));
}

void			ft_set_balance_after_insertion__(
					t_s_set *ps_set,
					t_s_set_node *ps_inserted_node)
{
	t_s_set_insertion_family	s_family;

	ft_set_node_insertion_family_init__(&s_family, ps_inserted_node);
	while (s_family->ps_parent
		&& s_family->ps_parent->bl_is_red
		&& s_family->ps_uncle->bl_is_red)
	{
		set_balance_uncle_is_red___(&s_family);
		ft_set_node_insertion_family_init__(&s_family, s_family.ps_node);
	}
	if (!s_family.ps_parent)
		s_family.ps_node->bl_is_red = false;
	else if (s_family.ps_parent->bl_is_red)
	{
		if (s_family.ps_grand_parent->ps_left_child
			== s_family.ps_parent)
			set_balance_grand_parent_on_right___(&s_family, ps_set);
		else
			set_balance_grand_parent_on_left___(&s_family, ps_set);
	}
}
