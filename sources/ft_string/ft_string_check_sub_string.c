/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_check_sub_string.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 20:22:00 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/22 16:55:14 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int						ft_string_check_sub_string__(
							t_string_c *src,
							t_sub_string *sub_string,
							t_error_c **error_addr)
{
	if (sub_string->start > src->size)
	{
		if (error_addr)
			*error_addr = ft_string_error_out_of_range();
		return (-1);
	}
	if (sub_string->len == FT_STRING_NPOS)
		sub_string->len = src->size - sub_string->start;
	else if ((sub_string->start + sub_string->len) > src->size)
	{
		if (error_addr)
			*error_addr = ft_string_error_out_of_range();
		return (-1);
	}
	return (0);
}
