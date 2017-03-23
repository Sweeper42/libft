/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 17:22:27 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/23 17:30:28 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stack.h"

int		ft_stack_pop(
			t_stack *stack,
			t_bool delete_value,
			t_error_c **error_addr)
{
	t_stack_elem	*to_del;

	if (stack->size == 0)
	{
		*error_addr = ft_stack_error_stack_empty();
		return (-1);
	}
	if (delete_value && !stack->handler->delete)
	{
		*error_addr = ft_stack_error_no_delete();
		return (-1);
	}
	to_del = stack->top;
	if (delete_value &&
		stack->handler->delete(to_del->value, error_addr) == -1)
		return (-1);
	stack->top = to_del->next;
	free(to_del);
	stack->size--;
	return (0);
}
