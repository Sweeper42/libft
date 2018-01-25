/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_node_create_.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 15:24:49 by nperrin           #+#    #+#             */
/*   Updated: 2018/01/24 15:27:18 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_/ft_set_node_.h"

t_s_set_node	*ft_set_node_create__(
						void const *pcov_value,
						t_s_set_node *ps_parent,
						t_error_c **hcos_error)
{
	t_s_set_node	*ps_new_node;

	if (!(ps_new_node = ft_memalloc(sizeof(t_s_set_node), hcos_error)))
		return (NULL);
	ps_new_node = (t_s_set_node){
		true,
		ps_parent,
		NULL,
		NULL,
		pcov_value
	};
	return (ps_new_node);
}
