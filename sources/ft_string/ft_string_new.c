/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 17:58:01 by nperrin           #+#    #+#             */
/*   Updated: 2017/10/22 20:09:46 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_mem.h"
#include "ft_string.h"

t_string		*ft_string_new(t_error_c **error_addr)
{
	t_string	*new_str;

	if (!(new_str = (t_string *)malloc(sizeof(t_string))))
	{
		if (error_addr)
			*error_addr = ft_error_bad_alloc();
	}
	else if (!ft_string_init(new_str, error_addr))
		ft_memdel((void **)&new_str);
	return (new_str);
}
