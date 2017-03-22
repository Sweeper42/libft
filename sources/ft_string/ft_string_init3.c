/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_init3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 19:07:00 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/22 16:55:52 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_mem.h"
#include "ft_cstring.h"
#include "ft_string.h"

t_string	*ft_string_init3(
				t_string *to_init,
				char const *src,
				size_t n,
				t_error_c **error_addr)
{
	size_t		alloc_size;
	size_t		src_size;

	to_init->size = 0;
	to_init->alloc_size = 0;
	src_size = ft_strlen(src);
	if (n > src_size)
		n = src_size;
	alloc_size = FT_STRING_GET_MARGIN(n + 1);
	if (!(to_init->str = malloc(sizeof(char) * alloc_size)))
	{
		if (error_addr)
			*error_addr = ft_error_bad_alloc();
		return (NULL);
	}
	to_init->size = src_size;
	to_init->alloc_size = alloc_size;
	ft_memcpy(to_init->str, src, n);
	to_init->str[n] = '\0';
	return (to_init);
}
