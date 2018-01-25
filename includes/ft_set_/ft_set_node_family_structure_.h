/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_node_family_structure_.h                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 16:57:30 by nperrin           #+#    #+#             */
/*   Updated: 2018/01/24 16:59:21 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SET_NODE_FAMILY_STRUCTURE__H
# define FT_SET_NODE_FAMILY_STRUCTURE__H

# include "ft_set_/ft_set_node_structure_.h"

typedef struct		s_set_node_insertion_family
{
	t_s_set_node	*ps_node;
	t_s_set_node	*ps_parent;
	t_s_set_node	*ps_grand_parent;
	t_s_set_node	*ps_uncle;
}					t_s_set_node_insertion_family;

#endif
