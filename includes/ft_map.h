/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 15:45:24 by nperrin           #+#    #+#             */
/*   Updated: 2017/10/18 16:18:13 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAP_H
# define FT_MAP_H

# include <stddef.h>
# include <stdint.h>
# include "ft_var_handling.h"
# include "ft_error.h"

# define FT_MAP_BY_VALUE				0
# define FT_MAP_BY_REF					1
# define FT_MAP_IS_BY_VALUE(X)			(((X).flags & 1) == FT_MAP_BY_VALUE)
# define FT_MAP_IS_BY_REF(X)			(((X).flags & 1) == FT_MAP_BY_REF)

# define FT_MAP_NODE_BLACK(X)			0
# define FT_MAP_NODE_RED(X)				1
# define FT_MAP_NODE_IS_BLACK(X)		(((X).flags & 1) == FT_MAP_NODE_BLACK)
# define FT_MAP_NODE_IS_RED(X)			(((X).flags & 1) == FT_MAP_NODE_RED)

# define FT_MAP_ERROR_INVALID_INIT		(FT_ERROR_NEW_ERR_NUM)
# define FT_MAP_ERROR_NO_RELOP			(FT_ERROR_NEW_ERR_NUM)

typedef struct			s_map_node
{
	uint8_t				flags;
	struct s_map_node	*r_parent;
	struct s_map_node	*r_rchild;
	struct s_map_node	*r_lchild;
	void const			*rc_key;
	void				*r_value;
}						t_map_node;

typedef struct			s_map
{
	uint8_t				flags;
	t_var_handler_c		*rc_handler;
	size_t				size;
	t_map_node			*r_root;
	t_map_node			leave;
}						t_map;

int						ft_map_init(
							t_map			*r_map,
							uint8_t			flags,
							t_var_handler_c	*rc_handler,
							t_error_c		**rrc_error);
t_map					*ft_map_new(
							uint8_t			flags,
							t_var_handler_c	*rc_handler,
							t_error_c		**rrc_error);

int						ft_map_clean(
							t_map		*r_map,
							t_error_c	**rrc_error);
int						ft_map_delete(
							t_map		*r_map,
							t_error_c	**rrc_error);

t_error_c				*ft_map_error_invalid_init(void);
t_error_c				*ft_map_error_no_relop(void);

#endif
