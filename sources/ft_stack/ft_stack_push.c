/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 17:20:02 by nperrin           #+#    #+#             */
/*   Updated: 2017/10/22 20:12:32 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stack.h"

int			ft_stack_push(
				t_stack *stack,
				void *value,
				t_error_c **error_addr)
{
	t_stack_elem	*new_elem;

	if (!(new_elem = (t_stack_elem *)malloc(sizeof(t_stack_elem))))
	{
		if (error_addr)
			*error_addr = ft_error_bad_alloc();
		return (-1);
	}
	new_elem->value = value;
	new_elem->next = stack->top;
	stack->top = new_elem;
	stack->size++;
	return (0);
}
