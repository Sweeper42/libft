/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_emplace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 17:28:17 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/23 19:06:26 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stack.h"

int		ft_stack_emplace(
			t_stack *stack,
			void *data,
			void *(*create)(void *, t_error_c **),
			t_error_c **error_addr)
{
	t_stack_elem	*new;

	if (!(new = malloc(sizeof(t_stack_elem))))
	{
		if (error_addr)
			*error_addr = ft_error_bad_alloc();
		return (-1);
	}
	*error_addr = NULL;
	new->value = (*create)(data, error_addr);
	if (!error_addr || *error_addr)
	{
		free(new);
		return (-1);
	}
	new->next = stack->top;
	stack->top = new;
	stack->size++;
	return (0);
}
