/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_init2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 18:27:55 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/21 19:30:16 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_mem.h"
#include "ft_string.h"

t_string		*ft_string_init2(
					t_string *to_init,
					t_string_c *src,
					size_t n,
					t_error_c **error_addr)
{
	size_t		alloc_size;

	to_init->size = 0;
	to_init->alloc_size = 0;
	if (n > ft_string_size(src))
		n = ft_string_size(src);
	alloc_size = FT_STRING_GET_MARGIN(n + 1);
	if (!(to_init->str = malloc(sizeof(char) * alloc_size)))
	{
		*error_addr = ft_error_bad_alloc();
		return (NULL);
	}
	to_init->size = ft_string_size(src);
	to_init->alloc_size = alloc_size;
	ft_memcpy(to_init->str, ft_string_c_str(src), n);
	to_init->str[n] = '\0';
	return (to_init);
}
