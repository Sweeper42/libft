/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 15:45:24 by nperrin           #+#    #+#             */
/*   Updated: 2017/12/03 15:58:31 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAP_H
# define FT_MAP_H

# include <stddef.h>
# include <stdint.h>
# include "ft_var_handling.h"
# include "ft_error.h"
# include "ft_iterator.h"

# define FT_MAP_MAX_CHILD_PER_NODE		4
# define FT_MAP_MAX_ELEM_PER_NODE		(FT_MAP_MAX_CHILD_PER_NODE - 1)

# define FT_MAP_BY_VALUE				0
# define FT_MAP_BY_REF					1
# define FT_MAP_KEY_BY_VALUE			0
# define FT_MAP_KEY_BY_REF				2

# define FT_MAP_IS_BY_VALUE(X)			(((X).flags & 1) == FT_MAP_BY_VALUE)
# define FT_MAP_IS_BY_REF(X)			(((X).flags & 1) == FT_MAP_BY_REF)

# define FT_MAP_KEY_IS_BY_VALUE(X)		(((X).flags & 2) == FT_MAP_KEY_BY_VALUE)
# define FT_MAP_KEY_IS_BY_REF(X)		(((X).flags & 2) == FT_MAP_KEY_BY_REF)

# define FT_MAP_NODE_ORIGIN_PARENT_IS_ROOT(X)	(((X).parent_info & 1) == 1)
# define FT_MAP_NODE_ORIGIN_CHILD_ID(X)			((X).parent_info >> 1)

typedef struct				s_map_elem_handler
{
	t_var_handler_c			*rc_value_handler;
	t_var_handler_c			*rc_key_handler;
}							t_map_elem_handler;

typedef struct				s_map_elem
{
	void const				*rc_key;
	void					*r_value;
}							t_map_elem;

typedef struct				s_map_node
{
	t_map_elem				elem[FT_MAP_MAX_ELEM_PER_NODE];
	struct s_map_node		(*arr_r_child)[FT_MAP_MAX_CHILD_PER_NODE];
	struct s_map_node		*r_parent;
	uint8_t					n_child;	
}							t_map_node;

typedef union				u_map_node_parent
{
	
}							t_map_node_parent;

typedef struct				s_map_node_origin
{
	uint8_t					parent_info;

}							t_map_node_origin;

typedef struct				s_map
{
	t_map_elem_handler		handler;
	size_t					size;
	t_map_node				*r_root;
	uint8_t					flags;
}							t_map;



/*
**------------------------|          errors          |------------------------**
*/

t_error_c					*ft_map_error_invalid_init(void);
t_error_c					*ft_map_error_no_relop(void);
t_error_c					*ft_map_error_large_node(void);

#endif
