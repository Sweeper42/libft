/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_insertion_.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 15:39:34 by nperrin           #+#    #+#             */
/*   Updated: 2018/01/23 15:48:33 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SET_INERTION__H
# define FT_SET_INERTION__H

# include "ft_set_node_.h"
# include "ft_set_structure_.h"
# include "ft_set_general_.h"
# include <stdint.h>

typedef struct	s_set_insertion_info
{
	t_s_set_intern_node		*ps_last_non_2node;
}				t_s_set_insertion_info;

/*
**----------------------------| leaf node method |----------------------------**
*/

int		ft_set_insertion_extend_leaf_root__(
			t_u_set_node	**hu_root,
			t_error_c		**hcos_error);

int		ft_set_insertion_merge_2node_with_leaf_child0__(
			t_s_set_intern_node	*ps_cur_node,
			t_error_c			**hcos_error);
int		ft_set_insertion_merge_2node_with_leaf_child3__(
			t_s_set_intern_node	*ps_cur_node,
			t_error_c			**hcos_error);

int		ft_set_insertion_merge_3node_with_leaf_child0__(
			t_s_set_intern_node	*ps_cur_node,
			t_error_c			**hcos_error);
int		ft_set_insertion_merge_3node_with_leaf_child1__(
			t_s_set_intern_node	*ps_cur_node,
			t_error_c			**hcos_error);
int		ft_set_insertion_merge_3node_with_leaf_child3__(
			t_s_set_intern_node	*ps_cur_node,
			t_error_c			**hcos_error);

/*
**---------------------------| intern node method |---------------------------**
*/
	
int		ft_set_insertion_extend_intern_root__(
			t_u_set_node	**hu_root,
			t_error_c		**hcos_error);

int		ft_set_insertion_merge_2node_with_intern_child0__(
			t_s_set_intern_node	*ps_cur_node,
			t_error_c			**hcos_error);
int		ft_set_insertion_merge_2node_with_intern_child3__(
			t_s_set_intern_node	*ps_cur_node,
			t_error_c			**hcos_error);

int		ft_set_insertion_merge_3node_with_intern_child0__(
			t_s_set_intern_node	*ps_cur_node,
			t_error_c			**hcos_error);
int		ft_set_insertion_merge_3node_with_intern_child1__(
			t_s_set_intern_node	*ps_cur_node,
			t_error_c			**hcos_error);
int		ft_set_insertion_merge_3node_with_intern_child3__(
			t_s_set_intern_node	*ps_cur_node,
			t_error_c			**hcos_error);

/*
**-----------------------------| descend method |-----------------------------**
*/

int		ft_set_insertion_find_target_leaf__(
			t_u_set_node	*pu_root,
			)

int		ft_set_insertion_insert_elem__(
			t_s_set		*ps_set,
			void const	*pcov_elem,
			t_error_c	*hcos_error);

int		ft_set_insertion_descend_ensure_no_4_node__(
			t_u_set_node			**hu_node,
			t_s_set_compare_info	s_compare_info,
			t_error_c				**hcos_error);
#endif
