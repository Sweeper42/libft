/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_error_value_to_big.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 17:21:53 by nperrin           #+#    #+#             */
/*   Updated: 2017/04/19 16:05:24 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

static t_error_c	g_string_error_value_to_big =
{
	FT_STRING_ERROR_VALUE_TO_BIG,
	"String: No value found."
};

t_error_c	*ft_string_error_value_to_big(void)
{
	return (&g_string_error_value_to_big);
}
