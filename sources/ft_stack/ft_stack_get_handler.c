/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_get_handler.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 17:38:41 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/23 17:40:56 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

static t_var_handler_c	g_stack_handler___ =
{
	NULL,
	NULL,
	(int (*)(void *, t_error_c **))&ft_stack_delete,
	NULL,
	NULL
};

t_var_handler_c			*ft_stack_get_handler(void)
{
	return (&g_stack_handler___);
}
