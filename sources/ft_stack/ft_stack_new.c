/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 17:09:18 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/23 17:18:08 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stack.h"

t_stack		*ft_stack_new(
				t_var_handler_c *handler,
				t_error_c **error_addr)
{
	t_stack		*new;

	if (!(new = malloc(sizeof(t_stack))))
	{
		if (error_addr)
			*error_addr = ft_error_bad_alloc();
		return (NULL);
	}
	return (ft_stack_init(new, handler));
}
