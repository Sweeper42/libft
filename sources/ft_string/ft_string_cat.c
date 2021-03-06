/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_cat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 19:35:04 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/22 16:50:49 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_mem.h"

int			ft_string_cat(
				t_string *string,
				t_string_c *src,
				t_sub_string sub_string,
				t_error_c **error_addr)
{
	size_t	new_alloc_size;

	if (ft_string_check_sub_string__(src, &sub_string, error_addr) == -1)
		return (-1);
	if (sub_string.len == 0)
		return (0);
	if ((string->size + sub_string.len + 1) > string->alloc_size)
	{
		new_alloc_size = FT_STRING_GET_MARGIN(
							string->size + sub_string.len + 1);
		if (ft_string_reserve(string, new_alloc_size, error_addr) == -1)
			return (-1);
	}
	ft_memcpy(
		string->str + string->size,
		src->str + sub_string.start,
		sub_string.len);
	string->size += sub_string.len;
	return (0);
}
