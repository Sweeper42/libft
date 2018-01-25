/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_node_get_grand_parent__.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 15:30:56 by nperrin           #+#    #+#             */
/*   Updated: 2018/01/24 15:32:57 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_/ft_set_node_.h"

inline t_s_set_node		*ft_set_node_get_grand_parent__(t_s_set_node *ps_node)
{
	if (!ps_node->ps_parent)
		return (NULL);
	return (ps_node->ps_parent->ps_parent);
}
