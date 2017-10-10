/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 18:58:17 by nperrin           #+#    #+#             */
/*   Updated: 2017/10/10 13:55:32 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_list_new(
				uint8_t flags,
				t_var_handler_c *handler,
				t_error_c **error_addr)
{
	t_list	*new;

	if (!(new = malloc(sizeof(t_list))))
	{
		if (error_addr)
			*error_addr = ft_error_bad_alloc();
		return (NULL);
	}
	if (ft_list_init(new, flags, handler, error_addr) == -1)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
