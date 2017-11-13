/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_reserve.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 19:38:34 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/13 14:13:41 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_mem.h"

int		ft_string_reserve(
			t_string *string,
			size_t new_size,
			t_error_c **rrc_error)
{
	if (string->alloc_size > new_size)
		return (0);
	if (!ft_realloc((void **)&string->str, string->alloc_size,
		new_size, rrc_error))
		return (-1);
	string->alloc_size = new_size;
	return (0);
}
