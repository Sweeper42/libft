/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 18:58:17 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/23 19:21:30 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_list_new(
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
	return (ft_list_init(new, handler));
}
