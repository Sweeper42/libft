/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 17:09:18 by nperrin           #+#    #+#             */
/*   Updated: 2017/10/22 20:11:43 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stack.h"

t_stack		*ft_stack_new(
				t_var_handler_c *handler,
				t_error_c **error_addr)
{
	t_stack		*new_stack;

	if (!(new_stack = (t_stack *)malloc(sizeof(t_stack))))
	{
		if (error_addr)
			*error_addr = ft_error_bad_alloc();
		return (NULL);
	}
	return (ft_stack_init(new_stack, handler));
}
