/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_get_handler.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 18:03:29 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/22 18:16:38 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

static t_var_handler_c	g_string_handler___ =
{
	(int (*)(void const *, void **, t_error **))&ft_string_dup,
	(int (*)(void const *, void *, t_error **))&ft_string_cpy,
	(int (*)(void *, t_error **))&ft_string_delete,
	(enum e_bool (*)(void const *, void const *))&ft_string_equal,
	(int (*)(void const *, void const *))&ft_string_cmp
};

t_var_handler_c			*ft_string_get_handler(void)
{
	return (&g_string_handler___);
}
