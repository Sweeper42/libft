/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_new3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 19:15:08 by nperrin           #+#    #+#             */
/*   Updated: 2017/10/22 20:10:00 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_mem.h"
#include "ft_string.h"

t_string				*ft_string_new3(
							char const *src,
							size_t n,
							t_error_c **error_addr)
{
	t_string	*new_string;

	if (!(new_string = (t_string *)malloc(sizeof(t_string))))
	{
		if (error_addr)
			*error_addr = ft_error_bad_alloc();
	}
	else if (!ft_string_init3(new_string, src, n, error_addr))
		ft_memdel((void **)&new_string);
	return (new_string);
}
