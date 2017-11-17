/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_error_bad_conversion.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:09:37 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/16 14:26:22 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_int.h"

static t_error_c	g_int_error_bad_conversion___ =
{
	FT_INT_ERROR_BAD_CONVERSION,
	"Int: convertion impossible, value to big"
};

t_error_c	*ft_int_error_bad_conversion(void)
{
	return (&g_int_error_bad_conversion___);
}
