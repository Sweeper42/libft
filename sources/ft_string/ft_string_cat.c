/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_cat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 19:35:04 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/21 20:15:10 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_mem.h"

static int	check_part_info__(
				t_string_c *src,
				t_string_pi *part_info,
				t_error_c **error_addr)
{
	if (part_info->start > src->size)
	{
		*error_addr = ft_string_error_out_of_range();
		return (-1);
	}
	if (part_info->len == FT_STRING_NPOS)
		part_info->len = src->size - part_info->start;
	else if ((part_info->start + part_info->len) > src->size)
	{
		*error_addr = ft_string_error_out_of_range();
		return (-1);
	}
	return (0);
}

int			ft_string_cat(
				t_string *string,
				t_string_c *src,
				t_string_pi *part_info,
				t_error_c **error_addr)
{
	size_t	new_alloc_size;

	if (check_part_info__(src, part_info, error_addr) == -1)
		return (-1);
	if (part_info->len == 0)
		return (0);
	if ((string->size + part_info->len + 1) > string->alloc_size)
	{
		new_alloc_size = FT_STRING_GET_MARGIN(
							string->size + part_info->len + 1);
		if (ft_string_reserve(string, new_alloc_size, error_addr) == -1)
			return (-1);
	}
	ft_memcpy(
		string->str + string->size,
		src->str + part_info->start,
		part_info->len);
	string->size += part_info->len;
	return (0);
}
