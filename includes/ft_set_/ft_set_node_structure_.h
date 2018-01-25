/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_node_structure_.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 15:14:54 by nperrin           #+#    #+#             */
/*   Updated: 2018/01/24 15:19:15 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SET_NODE_STRUCTURE__H
# define FT_SET_NODE_STRUCTURE__H

# include "ft_bool.h"

typedef struct s_set_node	t_s_set_node;

struct						s_set_node
{
	t_bool					bl_is_red;
	t_s_set_node			*ps_parent;
	t_s_set_node			*ps_left_child;
	t_s_set_node			*ps_right_child;
	void const				*pcov_value;
};

#endif

