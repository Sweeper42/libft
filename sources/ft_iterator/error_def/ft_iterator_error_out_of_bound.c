/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterator_error_out_of_bound.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 13:55:30 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/27 13:58:43 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_iterator.h"

static t_error_c	g_iterator_error_out_of_bound___ =
{
	FT_ITERATOR_ERROR_OUT_OF_BOUND,
	"Iterator: Try to move out of bound iterator."
};

t_error_c	*ft_iterator_error_out_of_bound(void)
{
	return (&g_iterator_error_out_of_bound___);
}
