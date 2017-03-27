/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterator_error_bad_operation.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 13:53:18 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/27 13:55:37 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_iterator.h"

static t_error_c	g_iterator_error_bad_operation___ =
{
	FT_ITERATOR_ERROR_BAD_OPERATION,
	"Iterator: Try to use unavailable operation."
};

t_error_c	*ft_iterator_error_bad_operation(void)
{
	return (&g_iterator_error_bad_operation___);
}
