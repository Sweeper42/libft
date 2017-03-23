/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_cati.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 16:22:31 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/23 16:27:14 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int						ft_string_cati(
							t_string *string,
							int value,
							t_error_c **error_addr)
{
	if (value < 0)
	{
		if (string->alloc_size < (string->size + 2))
		{
			if (ft_string_reserve(
				string,
				FT_STRING_GET_MARGIN(string->size + 2),
				error_addr) == -1)
				return (-1);
		}
		string->str[string->size] = '-';
		string->size++;
		return (ft_string_catu(string, (unsigned)-value, error_addr));
	}
	else
		return (ft_string_catu(string, (unsigned)value, error_addr));
}
