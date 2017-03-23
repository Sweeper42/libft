/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 17:20:02 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/23 17:22:19 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stack.h"

int			ft_stack_push(
				t_stack *stack,
				void *value,
				t_error_c **error_addr)
{
	t_stack_elem	*new;

	if (!(new = malloc(sizeof(t_stack_elem))))
	{
		*error_addr = ft_error_bad_alloc();
		return (-1);
	}
	new->value = value;
	new->next = stack->top;
	stack->top = new;
	stack->size++;
	return (0);
}
