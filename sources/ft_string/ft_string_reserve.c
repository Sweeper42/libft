/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_reserve.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 19:38:34 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/22 16:58:11 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_mem.h"

int		ft_string_reserve(
			t_string *string,
			size_t new_size,
			t_error_c **error_addr)
{
	if (string->alloc_size > new_size)
		return (0);
	if (!ft_realloc((void **)&string->str, string->alloc_size, new_size))
	{
		if (error_addr)
			*error_addr = ft_error_bad_alloc();
		return (-1);
	}
	string->alloc_size = new_size;
	return (0);
}
