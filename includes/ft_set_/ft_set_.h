/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 15:43:28 by nperrin           #+#    #+#             */
/*   Updated: 2018/01/25 15:55:50 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SET__H
# define FT_SET__H

# include "ft_set_structure_.h"
# include "ft_node_structure_.h"
# include "ft_set_error_.h"

t_s_set_node	*ft_set_rotate_node_to_left__(
					t_s_set_node **hs_node_from_parent);
t_s_set_node	*ft_set_rotate_node_to_right__(
					t_s_set_node **hs_node_from_parent);

t_s_set_node		**ft_set_find_insertion_position__(
						t_s_set			*ps_set,
						void const		*pcov_value,
						t_s_set_node	**hs_parent,
						t_error_c		**hcos_error);

void			ft_set_balance_after_insertion__(
					t_s_set			*ps_set,
					t_s_set_node	*ps_inserted_node);

#endif
