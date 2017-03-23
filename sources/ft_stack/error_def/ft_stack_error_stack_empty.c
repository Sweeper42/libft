/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_error_stack_empty.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 17:15:29 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/23 17:16:43 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

static t_error_c	g_stack_error_stack_empty =
{
	FT_STACK_ERROR_STACK_EMPTY,
	"Accessing unavaliable value."
};

t_error_c	*ft_stack_error_stack_empty(void)
{
	return (&g_stack_error_stack_empty);
}
