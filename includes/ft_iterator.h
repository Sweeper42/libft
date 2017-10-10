/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterator.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 13:21:29 by nperrin           #+#    #+#             */
/*   Updated: 2017/10/10 11:58:26 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ITERATOR_H
# define FT_ITERATOR_H

# include "ft_error.h"
# include "ft_bool.h"

# define FT_ITERATOR_CREATE(h, c, d1, d2) ((t_iterator){h, c, d1, d2})

/*
**------------------------|       errors number      |------------------------**
*/

# define FT_ITERATOR_ERROR_BAD_OPERATION		FT_ERROR_NEW_ERR_NUM
# define FT_ITERATOR_ERROR_NO_VALUE				FT_ERROR_NEW_ERR_NUM
# define FT_ITERATOR_ERROR_OUT_OF_BOUND			FT_ERROR_NEW_ERR_NUM

typedef struct s_iterator	t_iterator;
typedef t_iterator const	t_iterator_c;

/*
**------------------------|      handling struct     |------------------------**
*/

typedef struct				s_iterator_handler
{
	t_iterator				(*next)(t_iterator_c *, t_error_c **);
	t_iterator				(*prev)(t_iterator_c *, t_error_c **);
	t_iterator				*(*move)(t_iterator *, t_error_c **);
	t_iterator				*(*rmove)(t_iterator *, t_error_c **);
	void					*(*value)(t_iterator *, t_error_c **);
	void					*(*value_p)(t_iterator *, t_error_c **);
	t_bool					(*equal)(t_iterator_c *, t_iterator_c *);
}							t_iterator_handler;

typedef t_iterator_handler const	t_iterator_handler_c;

/*
**------------------------|      iterator struct     |------------------------**
*/

struct						s_iterator
{
	t_iterator_handler_c	*handler;
	void					*container;
	void					*data1;
	void					*data2;
};

/*
**------------------------|         handling         |------------------------**
*/

extern t_iterator			ft_it_next(
								t_iterator_c	*it,
								t_error_c		**error_addr);
extern t_iterator			ft_it_prev(
								t_iterator_c	*it,
								t_error_c		**error_addr);

extern t_iterator			*ft_it_move(
								t_iterator	*it,
								t_error_c	**error_addr);
extern t_iterator			*ft_it_rmove(
								t_iterator	*it,
								t_error_c	**error_addr);

extern void					*ft_it_value(
								t_iterator	*it,
								t_error_c	**error_addr);
extern void					*ft_it_value_p(
								t_iterator	*it,
								t_error_c	**error_addr);

extern t_bool				ft_it_equal(
								t_iterator_c	*it,
								t_iterator_c	*to_compare,
								t_error_c		**error_addr);

/*
**------------------------|          errors          |------------------------**
*/

t_error_c					*ft_iterator_error_bad_operation(void);
t_error_c					*ft_iterator_error_no_value(void);
t_error_c					*ft_iterator_error_out_of_bound(void);

#endif
