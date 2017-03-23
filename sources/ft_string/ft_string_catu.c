/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_catu.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 15:48:23 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/23 16:21:34 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdio.h>

#define BUF_SIZE___		20

static inline void		copy_value_in_string___(
							t_string *string,
							size_t u_size,
							char *buf)
{
	size_t	i;

	i = 0;
	while (i < u_size)
	{
		string->str[string->size + i] = buf[u_size - i - 1];
		i++;
	}
	string->str[string->size + u_size + 1] = '\0';
}

int						ft_string_catu(
							t_string *string,
							unsigned value,
							t_error_c **error_addr)
{
	char		buf[BUF_SIZE___];
	size_t		i;

	i = 0;
	while (value >= 10)
	{
		buf[i++] = (value % 10) + '0';
		value /= 10;
	}
	buf[i++] = (value % 10) + '0';
	if ((string->alloc_size) < (string->size + i + 1))
	{
		if (ft_string_reserve(
			string,
			FT_STRING_GET_MARGIN(string->size + i + 1),
			error_addr) == -1)
			return (-1);
	}
	copy_value_in_string___(string, i, buf);
	string->size += i;
	return (0);
}
