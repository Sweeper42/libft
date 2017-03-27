/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterator_error_no_value.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 13:57:26 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/27 14:07:48 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_iterator.h"

static t_error_c	g_iterator_error_no_value___ =
{
	FT_ITERATOR_ERROR_NO_VALUE,
	"Iterator: Try to access invalid value."
};

t_error_c	*ft_iterator_error_no_value(void)
{
	return (&g_iterator_error_no_value___);
}
