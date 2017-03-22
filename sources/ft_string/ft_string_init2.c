/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_init2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 18:27:55 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/22 16:55:42 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_mem.h"
#include "ft_string.h"

t_string		*ft_string_init2(
					t_string *to_init,
					t_string_c *src,
					t_sub_string sub_string,
					t_error_c **error_addr)
{
	size_t		alloc_size;

	to_init->size = 0;
	to_init->alloc_size = 0;
	to_init->str = NULL;
	if (ft_string_check_sub_string__(src, &sub_string, error_addr) == -1)
		return (NULL);
	alloc_size = FT_STRING_GET_MARGIN(sub_string.len + 1);
	if (!(to_init->str = malloc(sizeof(char) * alloc_size)))
	{
		if (error_addr)
			*error_addr = ft_error_bad_alloc();
		return (NULL);
	}
	to_init->size = sub_string.len;
	to_init->alloc_size = alloc_size;
	ft_memcpy(
		to_init->str,
		ft_string_c_str(src) + sub_string.start,
		sub_string.len);
	to_init->str[sub_string.len] = '\0';
	return (to_init);
}
