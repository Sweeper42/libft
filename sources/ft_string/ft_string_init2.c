/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_init2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 18:27:55 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/21 20:28:19 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_mem.h"
#include "ft_string.h"

t_string		*ft_string_init2(
					t_string *to_init,
					t_string_c *src,
					t_string_pi part_info,
					t_error_c **error_addr)
{
	size_t		alloc_size;

	to_init->size = 0;
	to_init->alloc_size = 0;
	to_init->str = NULL;
	if (ft_string_check_part_info__(src, &part_info, error_addr) == -1)
		return (NULL);
	alloc_size = FT_STRING_GET_MARGIN(part_info.len + 1);
	if (!(to_init->str = malloc(sizeof(char) * alloc_size)))
	{
		*error_addr = ft_error_bad_alloc();
		return (NULL);
	}
	to_init->size = part_info.len;
	to_init->alloc_size = alloc_size;
	ft_memcpy(
		to_init->str,
		ft_string_c_str(src) + part_info.start,
		part_info.len);
	to_init->str[part_info.len] = '\0';
	return (to_init);
}
