/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 18:37:12 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/07 11:35:55 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stddef.h>
# include <stdint.h>
# include "ft_error.h"
# include "ft_bool.h"
# include "ft_var_handling.h"
# include "ft_iterator.h"

# define FT_LIST_ERROR_NO_DELETE		FT_ERROR_NEW_ERR_NUM
# define FT_LIST_ERROR_LIST_EMPTY		FT_ERROR_NEW_ERR_NUM
# define FT_LIST_ERROR_INVALID_REF		FT_ERROR_NEW_ERR_NUM
# define FT_LIST_ERROR_BAD_ITERATOR		FT_ERROR_NEW_ERR_NUM

# define FT_LIST_BY_VALUE				0
# define FT_LIST_BY_REF					1
# define FT_LIST_IS_BY_VALUE(X)			(((X).flags & 1) == FT_LIST_BY_VALUE)
# define FT_LIST_IS_BY_REF(X)			(((X).flags & 1) == FT_LIST_BY_REF)

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
	uint8_t					flags;
}							t_list;

typedef t_list const		t_list_c;

/*
**------------------------|      initialization      |------------------------**
**------------------------|       and cleaning       |------------------------**
*/

int							ft_list_init(
								t_list			*to_init,
								uint8_t			flags,
								t_var_handler_c *handler,
								t_error_c		**error_addr);
int							ft_list_clean(
								t_list		*list,
								t_error_c	**error_addr);

/*
**------------------------|        allocation        |------------------------**
**------------------------|       and deletion       |------------------------**
*/

t_list						*ft_list_new(
								uint8_t			flags,
								t_var_handler_c	*handler,
								t_error_c		**error_addr);
int							ft_list_delete(
								t_list		*list,
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
**------------------------|  relational operations   |------------------------**
*/

int							ft_list_dup(
								t_list_c	*list,
								t_list		**target,
								t_error_c	**error_addr);

/*
**------------------------|     iterator access      |------------------------**
*/

extern t_iterator			ft_list_begin(t_list *list);
extern t_iterator			ft_list_end(t_list *list);

extern t_iterator			ft_list_rbegin(t_list *list);
extern t_iterator			ft_list_rend(t_list *list);

t_iterator					ft_list_find(
								t_list		*list,
								void const	*to_compare,
								t_error_c	**error_addr);
t_iterator					ft_list_find_from(
								t_list			*list,
								t_iterator_c	*pos,
								void const		*to_compare,
								t_error_c		**error_addr);

/*
**------------------------|     iterator handling    |------------------------**
*/

t_iterator					ft_list_it_next(
								t_iterator_c	*it,
								t_error_c		**error_addr);
t_iterator					ft_list_it_prev(
								t_iterator_c	*it,
								t_error_c		**error_addr);

t_iterator					*ft_list_it_move(
								t_iterator	*it,
								t_error_c	**error_addr);
t_iterator					*ft_list_it_rmove(
								t_iterator	*it,
								t_error_c	**error_addr);

void						*ft_list_it_value(
								t_iterator	*it,
								t_error_c	**error_addr);
void						*ft_list_it_value_p(
								t_iterator	*it,
								t_error_c	**error_addr);

t_bool						ft_list_it_equal(
								t_iterator_c	*it,
								t_iterator_c	*to_compare);

t_iterator_handler_c		*ft_list_get_iterator_handler(void);
t_iterator_handler_c		*ft_list_get_riterator_handler(void);

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
								t_error_c	**error_addr);
int							ft_list_pop_back(
								t_list		*list,
								t_error_c	**error_addr);
int							ft_list_remove(
								t_list		*list,
								t_iterator	*to_remove,
								t_error_c	**error_addr);

/*
**------------------------|          errors          |------------------------**
*/

t_error_c					*ft_list_error_no_delete(void);
t_error_c					*ft_list_error_list_empty(void);
t_error_c					*ft_list_error_invalid_ref(void);
t_error_c					*ft_list_error_bad_iterator(void);

/*
**------------------------|          private         |------------------------**
*/

extern t_list_elem			*ft_list_create_elem(
								t_list_c	*list,
								void		*value,
								t_error_c	**error_addr);

#endif
