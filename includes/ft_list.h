/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 18:37:12 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/23 19:26:36 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stddef.h>
# include "ft_error.h"
# include "ft_bool.h"
# include "ft_var_handling.h"

# define FT_LIST_ERROR_NO_DELETE		FT_ERROR_NEW_ERR_NUM
# define FT_LIST_ERROR_LIST_EMPTY		FT_ERROR_NEW_ERR_NUM

typedef struct s_list_elem	t_list_elem;

struct						s_list_elem
{
	t_list_elem				*prev;
	t_list_elem				*next;
	void					*value;
};

typedef struct				s_list
{
	size_t					size;
	t_var_handler_c			*handler;
	t_list_elem				first;
	t_list_elem				last;
}							t_list;

typedef t_list const		t_list_c;

/*
**------------------------|      initialization      |------------------------**
**------------------------|       and cleaning       |------------------------**
*/

t_list						*ft_list_init(
								t_list			*to_init,
								t_var_handler_c *handler);
int							ft_list_clean(
								t_list		*list,
								t_bool		delete_value,
								t_error_c	**error_addr);

/*
**------------------------|        allocation        |------------------------**
**------------------------|       and deletion       |------------------------**
*/

t_list						*ft_list_new(
								t_var_handler_c	*handler,
								t_error_c		**error_addr);
int							ft_list_delete(
								t_list		*list,
								t_bool		delete_value,
								t_error_c	**error_addr);

/*
**------------------------|         capacity         |------------------------**
*/

extern t_bool				ft_list_empty(t_list_c *list);
extern size_t				ft_list_size(t_list_c *list);

/*
**------------------------|      element access      |------------------------**
*/

extern void					*ft_list_front(
								t_list		*list,
								t_error_c	**error_addr);
extern void					*ft_list_back(
								t_list		*list,
								t_error_c	**error_addr);

/*
**------------------------|         modifiers        |------------------------**
*/

int							ft_list_push_front(
								t_list		*list,
								void		*value,
								t_error_c	**error_addr);
int							ft_list_push_back(
								t_list		*list,
								void		*value,
								t_error_c	**error_addr);

int							ft_list_pop_front(
								t_list		*list,
								t_bool		delete_value,
								t_error_c	**error_addr);
int							ft_list_pop_back(
								t_list		*list,
								t_bool		delete_value,
								t_error_c	**error_addr);

/*
**------------------------|          errors          |------------------------**
*/

t_error_c					*ft_list_error_no_delete(void);
t_error_c					*ft_list_error_list_empty(void);

#endif
