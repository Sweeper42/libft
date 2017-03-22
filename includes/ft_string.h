/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 17:51:45 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/22 18:05:25 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <stddef.h>
# include "ft_error.h"
# include "ft_bool.h"
# include "ft_var_handling.h"

# define FT_STRING_NPOS			((size_t)-1)
# define FT_STRING_INIT_SIZE	((size_t)8)

# define FT_STRING_GET_MARGIN(X)	((size_t)((X) + 8))

# define FT_STRING_ERROR_OUT_OF_RANGE		FT_ERROR_NEW_ERR_NUM

# define FT_SUB_STRING(start, len)			((t_sub_string){start, len})
# define FT_SUB_STRING_ALL					FT_SUB_STRING(0, FT_STRING_NPOS)

typedef struct			s_string
{
	char				*str;
	size_t				size;
	size_t				alloc_size;
}						t_string;

typedef t_string const	t_string_c;

typedef struct			s_sub_string
{
	size_t				start;
	size_t				len;
}						t_sub_string;

t_var_handler_c			*ft_string_get_handler(void);

/*
**------------------------|      initialization      |------------------------**
**------------------------|       and cleaning       |------------------------**
*/

t_string				*ft_string_init(
							t_string	*to_init,
							t_error_c	**error_addr);
t_string				*ft_string_init2(
							t_string		*to_init,
							t_string_c		*src,
							t_sub_string	sub_string,
							t_error_c		**error_addr);
t_string				*ft_string_init3(
							t_string	*to_init,
							char const	*src,
							size_t		n,
							t_error_c	**error_addr);

extern void				ft_string_clean(t_string *string);

/*
**------------------------|        allocation        |------------------------**
**------------------------|       and deletion       |------------------------**
*/

t_string				*ft_string_new(t_error_c **error_addr);
t_string				*ft_string_new2(
							t_string_c		*src,
							t_sub_string	sub_string,
							t_error_c		**error_addr);
t_string				*ft_string_new3(
							char const	*src,
							size_t		n,
							t_error_c	**error_addr);

int						ft_string_delete(
							t_string	*string,
							t_error_c	**error_addr);

/*
**------------------------|         capacity         |------------------------**
*/

extern t_bool			ft_string_empty(t_string_c *string);
extern size_t			ft_string_size(t_string_c *string);

int						ft_string_reserve(
							t_string	*string,
							size_t		new_size,
							t_error_c	**error_addr);

/*
**------------------------|         modifiers        |------------------------**
*/

int						ft_string_cat(
							t_string *string,
							t_string_c *src,
							t_sub_string	sub_string,
							t_error_c **error_addr);

/*
**------------------------|    string operations     |------------------------**
*/

extern char const		*ft_string_c_str(t_string_c *string);

int						ft_string_dup(
							t_string_c	*string,
							t_string	**target,
							t_error_c	**error_addr);
int						ft_string_cpy(
							t_string_c	*string,
							t_string	*target,
							t_error_c	**error_addr);

t_bool					ft_string_equal(
							t_string_c	*string,
							t_string_c	*to_compare);
int						ft_string_cmp(
							t_string_c	*string,
							t_string_c	*to_compare);

/*
**------------------------|          errors          |------------------------**
*/

t_error_c				*ft_string_error_out_of_range(void);

/*
**------------------------|     private methode      |------------------------**
*/

int						ft_string_check_sub_string__(
							t_string_c		*src,
							t_sub_string	*sub_string,
							t_error_c		**error_addr);

#endif
