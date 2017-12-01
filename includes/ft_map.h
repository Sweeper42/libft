/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 15:45:24 by nperrin           #+#    #+#             */
/*   Updated: 2017/10/28 12:13:28 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAP_H
# define FT_MAP_H

# include <stddef.h>
# include <stdint.h>
# include "ft_var_handling.h"
# include "ft_error.h"
# include "ft_iterator.h"

# define FT_MAP_BY_VALUE				0
# define FT_MAP_BY_REF					1
# define FT_MAP_KEY_BY_VALUE			0
# define FT_MAP_KEY_BY_REF				2

# define FT_MAP_IS_BY_VALUE(X)			(((X).flags & 1) == FT_MAP_BY_VALUE)
# define FT_MAP_IS_BY_REF(X)			(((X).flags & 1) == FT_MAP_BY_REF)

# define FT_MAP_KEY_IS_BY_VALUE(X)		(((X).flags & 2) == FT_MAP_KEY_BY_VALUE)
# define FT_MAP_KEY_IS_BY_REF(X)		(((X).flags & 2) == FT_MAP_KEY_BY_REF)

# define FT_MAP_ERROR_INVALID_INIT		(FT_ERROR_NEW_ERR_NUM)
# define FT_MAP_ERROR_NO_RELOP			(FT_ERROR_NEW_ERR_NUM)
# define FT_MAP_ERROR_LARGE_NODE		(FT_ERROR_NEW_ERR_NUM)

# define FT_MAP_NODE_RELEM(p_node, idx)	((t_map_elem **)(((void **)((p_node) + 1)) + (idx)))
# define FT_MAP_NODE_RCHILD(p_node, idx) ((t_map_node **)(((void **)((p_node) + 1)) + (idx) + (p_node)->n_elem))

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
	struct s_map_node		*r_parent;
	unsigned int : 3		n_elem;
	unsigned int : 1		have_child;
}							t_map_node;

typedef struct				s_map
{
	uint8_t					flags;
	t_map_elem_handler_c	elem_handler;
	size_t					size;
	t_map_node				*r_root;
}							t_map;

typedef t_map const			t_map_c;

/*
**------------------------|      initialization      |------------------------**
**------------------------|       and cleaning       |------------------------**
*/

int							ft_map_init(
								t_map				*r_map,
								uint8_t				flags,
								t_map_elem_handler	elem_handler,
								t_error_c			**rrc_error);
int							ft_map_clean(
								t_map		*r_map,
								t_error_c	**rrc_error);
/*
**------------------------|        allocation        |------------------------**
**------------------------|       and deletion       |------------------------**
*/

t_map						*ft_map_new(
								uint8_t				flags,
								t_map_elem_handler	elem_handler,
								t_error_c			**rrc_error);
int							ft_map_delete(
								t_map		*r_map,
								t_error_c	**rrc_error);

/*
**------------------------|         modifiers        |------------------------**
*/

t_iterator					ft_map_insert(
								t_map		*r_map,
								t_map_elem	map_elem,
								t_error_c	**rrc_error);

/*
**------------------------|     iterator handling    |------------------------**
*/

void						*ft_map_it_value(
								t_iterator	*r_it,
								t_error_c	**error_addr);
void						*ft_map_it_value_p(
								t_iterator	*r_it,
								t_error_c	**error_addr);

/*
t_iterator					ft_map_it_next(
								t_iterator_c	*it,
								t_error_c		**error_addr);
t_iterator					ft_map_it_prev(
								t_iterator_c	*it,
								t_error_c		**error_addr);

t_iterator					*ft_map_it_move(
								t_iterator	*it,
								t_error_c	**error_addr);
t_iterator					*ft_map_it_rmove(
								t_iterator	*it,
								t_error_c	**error_addr);
t_bool						ft_map_it_equal(
								t_iterator_c	*it,
								t_iterator_c	*to_compare);
*/

/*
**------------------------|          private         |------------------------**
*/

extern t_map_node			**ft_map_node_rrchild__(
								t_map_node	*r_node,
								uint8_t		child_idx);
extern t_map_elem			*ft_map_node_rrelem__(
								t_map_node	*r_node,
								uint8_t		elem_idx);


extern int					ft_map_create_elem__(
								t_map_c		*rc_map,
								t_map_elem	elem,
								t_map_elem	*r_target,
								t_error		**rrc_error);

int							*ft_map_node_insert__(
								t_map_elem_handler_c	*rc_handler,
								t_map_elem				to_insert,
								t_map_node				**rp_where,
								t_error_c				**rrc_error);

/*
**------------------------|          errors          |------------------------**
*/

t_error_c					*ft_map_error_invalid_init(void);
t_error_c					*ft_map_error_no_relop(void);
t_error_c					*ft_map_error_large_node(void);

#endif
