/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_var_handling.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 16:53:45 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/22 18:12:12 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VAR_HANDLING_H
# define FT_VAR_HANDLING_H

# include "ft_bool.h"
# include "ft_error.h"

typedef struct					s_var_handler
{
	int							(*dup)(
									void const *,
									void **,
									t_error **);
	int							(*cpy)(
									void const *,
									void *,
									t_error **);
	int							(*delete)(
									void *,
									t_error **);
	t_bool						(*equal)(
									void const *,
									void const *);
	int							(*cmp)(
									void const *,
									void const *);
}								t_var_handler;

typedef t_var_handler const		t_var_handler_c;

typedef void const				t_void_c;

#endif
