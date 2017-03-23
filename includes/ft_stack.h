/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 16:52:20 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/23 18:12:27 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_H
# define FT_STACK_H

# include <stddef.h>
# include "ft_var_handling.h"
# include "ft_bool.h"
# include "ft_error.h"

# define FT_STACK_ERROR_NO_DELETE		FT_ERROR_NEW_ERR_NUM
# define FT_STACK_ERROR_STACK_EMPTY		FT_ERROR_NEW_ERR_NUM

typedef struct s_stack_elem		t_stack_elem;
struct							s_stack_elem
{
	t_stack_elem				*next;
	void						*value;
};

typedef struct					s_stack
{
	size_t						size;
	t_var_handler_c				*handler;
	t_stack_elem				*top;
}								t_stack;
typedef t_stack const			t_stack_c;

/*
**------------------------|      initialization      |------------------------**
**------------------------|       and cleaning       |------------------------**
*/

t_stack							*ft_stack_init(
									t_stack			*to_init,
									t_var_handler_c *handler);
int								ft_stack_clean(
									t_stack		*stack,
									t_bool		delete_value,
									t_error_c	**error_addr);

/*
**------------------------|        allocation        |------------------------**
**------------------------|       and deletion       |------------------------**
*/

t_stack							*ft_stack_new(
									t_var_handler_c	*handler,
									t_error_c		**error_addr);
int								ft_stack_delete(
									t_stack		*stack,
									t_bool		delete_value,
									t_error_c	**error_addr);

/*
**------------------------|         capacity         |------------------------**
*/

extern t_bool					ft_stack_empty(t_stack_c *stack);
extern size_t					ft_stack_size(t_stack_c *stack);

/*
**------------------------|      element access      |------------------------**
*/

void							*ft_stack_top(
									t_stack		*stack,
									t_error_c	**error_addr);

/*
**------------------------|         modifiers        |------------------------**
*/

int								ft_stack_push(
									t_stack		*stack,
									void		*value,
									t_error_c	**error_addr);
int								ft_stack_emplace(
									t_stack		*stack,
									void		*data,
									void		*(*create)(
													void *,
													t_error_c **),
									t_error_c	**error_addr);

int								ft_stack_pop(
									t_stack		*stack,
									t_bool		delete_value,
									t_error_c	**error_addr);

/*
**------------------------|  relational operations   |------------------------**
*/

t_var_handler_c					*ft_stack_get_handler(void);

/*
**------------------------|          errors          |------------------------**
*/

t_error_c						*ft_stack_error_no_delete(void);
t_error_c						*ft_stack_error_stack_empty(void);

#endif
