/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_node_structures_.h                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 11:07:32 by nelson            #+#    #+#             */
/*   Updated: 2017/12/10 17:29:45 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SET_NODE_STRUCTURES__H
# define FT_SET_NODE_STRUCTURES__H

# include "ft_var_handling.h"

typedef enum					e_set_node_type
{
	set_node_type_2_node,
	set_node_type_3_node,
	set_node_type_4_node
}								t_e_set_node_type;

typedef struct s_set_intern_node	t_s_set_intern_node;
typedef struct s_set_leaf_node		t_s_set_leaf_node;
typedef union u_set_node			t_u_set_node;

typedef struct					s_set_node_info
{
	unsigned					bl_is_leaf : 1;
	t_e_set_node_type			e_type : 2;
}								t_bf_set_node_info;

struct							s_set_intern_node
{
	t_bf_set_node_info			bf_info;
	t_u_set_node				*pu_parent;
	void const					*arpcov_elem[3];
	t_u_set_node				*arpu_child[4];
};

struct							s_set_leaf_node
{
	t_bf_set_node_info			bf_info;
	t_u_set_node				*pu_parent;
	void const					*arpcov_elem[3];
};

union							u_set_node
{
	t_bf_set_node_info			bf_info;
	t_s_set_intern_node			s_intern_node;
	t_s_set_leaf_node			s_leaf_node;
};

#endif
