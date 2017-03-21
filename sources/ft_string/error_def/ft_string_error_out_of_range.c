/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_error_out_of_range.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 19:59:22 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/21 20:14:12 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

static t_error_c	g_string_error_out_of_range =
{
	FT_STRING_ERROR_OUT_OF_RANGE,
	"Using string memory out of range."
};

t_error_c	*ft_string_error_out_of_range(void)
{
	return (&g_string_error_out_of_range);
}
