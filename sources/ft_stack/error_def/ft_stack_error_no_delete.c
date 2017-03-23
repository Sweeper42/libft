/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_error_no_delete.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 17:01:23 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/23 17:08:04 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

static t_error_c	g_stack_error_no_delete =
{
	FT_STACK_ERROR_NO_DELETE,
	"Using unexisting delete method."
};

t_error_c	*ft_stack_error_no_delete(void)
{
	return (&g_stack_error_no_delete);
}
