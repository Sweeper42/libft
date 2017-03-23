/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_clean.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 16:50:31 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/23 18:53:38 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stack.h"

static inline int	check_param___(
						t_stack_c *stack,
						t_bool delete_value,
						t_error_c **error_addr)
{
	if (delete_value && !stack->handler->delete)
	{
		*error_addr = ft_stack_error_no_delete();
		return (-1);
	}
	return (0);
}

int					ft_stack_clean(
						t_stack *stack,
						t_bool delete_value,
						t_error_c **error_addr)
{
	t_stack_elem	*cur;
	t_stack_elem	*prev;

	if (check_param___(stack, delete_value, error_addr) == -1)
		return (-1);
	cur = stack->top;
	prev = NULL;
	while (cur)
	{
		if (delete_value &&
			(stack->handler->delete(cur->value, error_addr) == -1))
			return (-1);
		prev = cur;
		cur = cur->next;
		free(prev);
		stack->size--;
	}
	stack->top = NULL;
	return (0);
}
