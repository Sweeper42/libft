/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_node_get_uncle__.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 15:32:49 by nperrin           #+#    #+#             */
/*   Updated: 2018/01/24 15:35:13 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_/ft_set_node_.h"

inline t_s_set_node		*ft_set_node_get_uncle__(t_s_set_node *ps_node)
{
	t_s_set_node	*ps_parent;

	ps_parent = ps_node->ps_parent;
	if (!ps_parent)
		return (NULL);
	return (ft_set_node_get_sibling__(ps_parent));
}
