/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_new2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 19:05:53 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/22 16:57:56 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_mem.h"
#include "ft_string.h"

t_string		*ft_string_new2(
					t_string_c *src,
					t_sub_string sub_string,
					t_error_c **error_addr)
{
	t_string	*new;

	if (!(new = malloc(sizeof(t_string))))
	{
		if (error_addr)
			*error_addr = ft_error_bad_alloc();
	}
	else if (!ft_string_init2(new, src, sub_string, error_addr))
		ft_memdel((void **)&new);
	return (new);
}
