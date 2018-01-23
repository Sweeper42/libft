/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_general_.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 11:52:38 by nperrin           #+#    #+#             */
/*   Updated: 2018/01/18 12:17:42 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SET_GENERAL__H
# define FT_SET_GENERAL__H

# include "ft_set_node_.h"
# include <stdint.h>

typedef struct			s_set_node_child_info
{
	t_u_set_node		*pu_child;
	uint8_t				uix_child;
}						t_s_set_node_child_info;

typedef struct			s_set_compare_info
{
	int					(*f_compare)(
							void const *,
							void const *);
	void const			*pcov_elem;
}						t_s_set_compare_info;

int						ft_set_get_next_child_info(
							t_u_set_node			*pu_node,
							t_s_set_compare_info	s_compare_info,
							t_s_set_node_child_info	**hs_child_info,
							t_error_c				**hcos_error);

t_u_set_node			*ft_set_get_next_child(
							t_u_set_node			*pu_node,
							t_s_set_compare_info	s_compare_info,
							t_error_c				**hcos_error);

#endif
