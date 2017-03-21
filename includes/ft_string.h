/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 17:51:45 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/21 19:18:56 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <stddef.h>
# include "ft_error.h"
# include "ft_bool.h"

# define FT_STRING_NPOS			((size_t)-1)
# define FT_STRING_INIT_SIZE	((size_t)8)

# define FT_STRING_GET_MARGIN(X)	((size_t)((X) + 8))

typedef struct			s_string
{
	char				*str;
	size_t				size;
	size_t				alloc_size;
}						t_string;

typedef t_string const	t_string_c;

t_string				*ft_string_new(t_error_c **error_addr);
t_string				*ft_string_new2(
							t_string_c	*src,
							size_t		n,
							t_error_c	**error_addr);
t_string				*ft_string_new3(
							char const	*src,
							size_t		n,
							t_error_c	**error_addr);

t_string				*ft_string_init(
							t_string	*to_init,
							t_error_c	**error_addr);
t_string				*ft_string_init2(
							t_string	*to_init,
							t_string_c	*src,
							size_t		n,
							t_error_c	**error_addr);
t_string				*ft_string_init3(
							t_string	*to_init,
							char const	*src,
							size_t		n,
							t_error_c	**error_addr);

extern t_bool			ft_string_empty(t_string_c *string);
extern size_t			ft_string_size(t_string_c *string);

extern char const		*ft_string_c_str(t_string_c *string);

#endif
