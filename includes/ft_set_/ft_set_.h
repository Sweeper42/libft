/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 10:58:41 by nelson            #+#    #+#             */
/*   Updated: 2017/12/10 17:47:41 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SET__H
# define FT_SET__H

# include <stdint.h>
# include "ft_set_structure_.h"
# include "ft_set_node_structures_.h"
# include "ft_set_error.h"

/*
**--------------------|  defined in ft_set_structure_.h  |--------------------**
**
**	typedef struct					s_set
**	{
**		size_t						usc_elem;
**		t_u_set_node				*pu_root;
**		t_var_handler_c				*pcos_elem_handler;
**	}								t_s_set;
**
**-----------------|  defined in ft_set_node_structures_.h  |-----------------**
**
**	typedef enum					e_set_node_type
**	{
**		set_node_type_2_node,
**		set_node_type_3_node,
**		set_node_type_4_node,
**	}								t_e_set_node_type;
**	
**	typedef struct s_set_intern_node	t_s_set_intern_node;
**	typedef struct s_set_leaf_node		t_s_set_leaf_node;
**	
**	typedef struct					s_set_node_info
**	{
**		unsigned					bl_is_leaf : 1;
**		t_e_set_node_type			e_type : 2;
**	}								t_bf_set_node_info;
**	
**	typedef union					u_set_node
**	{
**		t_bf_set_node_info			bf_info;
**		t_s_set_intern_node			s_intern_node,
**		t_s_set_leaf_node			s_leaf_node
**	}								t_u_set_node;
**	
**	struct							s_set_intern_node
**	{
**		t_s_set_node_info			bf_info;
**		t_u_set_node				*pu_parent;
**		void const					(*arpcov_elem)[3];
**		t_u_set_node				(*arpu_child)[4];
**	};
**	
**	struct							s_set_leaf_node
**	{
**		t_s_set_node_info			bf_info;
**		t_u_set_node				*pu_parent;
**		void const					(*arpcov_elem)[3];
**	};
**	
*/

# define FT_SET_NODE_IS_LEAF(N)		((N).info.bl_is_leaf == 1)

t_u_set_node	*ft_set_2_leaf_node_create__(
					t_u_set_node	*pu_parent,
					void const		*pcov_elem_to_add,
					t_error_c		**hcos_error);
t_u_set_node	*ft_set_2_intern_node_create__(
					t_u_set_node	*pu_parent,
					t_u_set_node	(*arp_child)[2],
					void const		*pcov_elem_to_add,
					t_error_c		**hcos_error);

int				ft_set_2_leaf_node_extend__(
					t_s_set_leaf_node	*ps_to_extend,
					void const			*pcov_elem_to_add,
					t_var_handler_c		*pcos_elem_handler,
					t_error_c			**hcos_error);
int				ft_set_3_leaf_node_extend__(
					t_s_set_leaf_node	*ps_to_extend,
					void const			*pcov_elem_to_add,
					t_var_handler_c		*pcos_elem_handler,
					t_error_c			**hcos_error);
extern int		ft_set_leaf_node_extend__(
					t_s_set_leaf_node	*ps_to_extend,
					void const			*pcov_elem_to_add,
					t_var_handler_c		*pcos_elem_handler,
					t_error_c			**hcos_error);

int				ft_set_2_intern_node_merge_with_child__(
					t_s_set_intern_node	*ps_node_parent,
					uint8_t				u8ix_target_child,
					t_error_c			**hcos_error);
int				ft_set_3_intern_node_merge_with_child__(
					t_s_set_intern_node	*ps_node_parent,
					uint8_t				u8ix_target_child,
					t_error_c			**hcos_error);
int				ft_set_intern_node_merge_with_child__(
					t_s_set_intern_node	*ps_node_parent,
					uint8_t				u8ix_target_child,
					t_error_c			**hcos_error);

int				ft_set_4_leaf_node_split__(
					t_u_set_node	**hu_node_to_split,
					t_error_c		**hcos_error);
int				ft_set_4_intern_node_split__(
					t_u_set_node	**hu_node_to_split,
					t_error_c		**hcos_error);
int				ft_set_4_node_split__(
					t_u_set_node	**hu_node_to_split,
					t_error_c		**hcos_error);

int				ft_set_init_root__(
					t_s_set			*ps_set,
					void const		*pcov_elem_to_add,
					t_error_c		**hcos_error);

#endif
