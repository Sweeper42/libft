/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_node_.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 15:19:28 by nperrin           #+#    #+#             */
/*   Updated: 2018/01/24 16:08:46 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SET_NODE__H
# define FT_SET_NODE__H

# include "ft_set_node_structure_.h"
# include "ft_error.h"

t_s_set_node		*ft_set_node_create__(
						void const		*pcov_value,
						t_s_set_node	*ps_parent,
						t_error_c		**hcos_error);

extern t_s_set_node	*ft_set_node_get_sibling__(
						t_s_set_node *ps_node);
extern t_s_set_node	*ft_set_node_get_grand_parent__(
						t_s_set_node *ps_node);
extern t_s_set_node	*ft_set_node_get_uncle__(
						t_s_set_node *ps_node);
extern t_s_set_node	**ft_set_node_get_handler__(
						t_s_set			*ps_set,
						t_s_set_node	*ps_node);
#endif
