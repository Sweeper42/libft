/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_check_part_info.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 20:22:00 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/21 20:22:22 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int						ft_string_check_part_info__(
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
