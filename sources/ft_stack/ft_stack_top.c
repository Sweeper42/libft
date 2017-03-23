/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_top.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 17:18:30 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/23 17:19:46 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void		*ft_stack_top(
				t_stack *stack,
				t_error_c **error_addr)
{
	if (stack->size == 0)
	{
		*error_addr = ft_stack_error_stack_empty();
		return (NULL);
	}
	return (stack->top->value);
}
