/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 18:02:47 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/22 16:55:32 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

t_string		*ft_string_init(
					t_string *to_init,
					t_error_c **error_addr)
{
	to_init->size = 0;
	to_init->alloc_size = 0;
	if (!(to_init->str = (char *)malloc(sizeof(char) * FT_STRING_INIT_SIZE)))
	{
		if (error_addr)
			*error_addr = ft_error_bad_alloc();
		return (NULL);
	}
	to_init->str[0] = '\0';
	to_init->alloc_size = FT_STRING_INIT_SIZE;
	return (to_init);
}
