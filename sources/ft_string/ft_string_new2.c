/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_new2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 19:05:53 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/21 20:28:00 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_mem.h"
#include "ft_string.h"

t_string		*ft_string_new2(
					t_string_c *src,
					t_string_pi part_info,
					t_error_c **error_addr)
{
	t_string	*new;

	if (!(new = malloc(sizeof(t_string))))
		*error_addr = ft_error_bad_alloc();
	else if (!ft_string_init2(new, src, part_info, error_addr))
		ft_memdel((void **)&new);
	return (new);
}
