/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_error_extending_4_leaf_node.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 13:24:18 by nelson            #+#    #+#             */
/*   Updated: 2017/12/10 13:26:20 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_/ft_set_error.h"

static t_error_c	g_set_error_extending_4_leaf_node___ =
{
	FT_SET_ERROR_EXTENDING_4_LEAF_NODE,
	"ft_set: extending 4-leaf-node."
};

t_error_c	*ft_set_error_extending_4_leaf_node(void)
{
	return (&g_set_error_extending_4_leaf_node___);
}
