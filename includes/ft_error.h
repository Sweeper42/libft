/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 15:51:18 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/21 16:31:49 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ERROR_H
# define FT_ERROR_H 

# include <stddef.h>

# define FT_ERROR_NEW_ERR_NUM	(__COUNTER__)

# define FT_ERROR_BAD_ALLOC		FT_ERROR_NEW_ERR_NUM

typedef struct			s_error
{
	size_t		err_num;
	char const	*why;
}						t_error;

typedef t_error const	t_error_c;

extern size_t			ft_error_get_err_num(t_error_c *error);
extern char const		*ft_error_get_why(t_error_c *error);

extern t_error_c		*ft_error_bad_alloc(void);

#endif
