/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_emplace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 17:28:17 by nperrin           #+#    #+#             */
/*   Updated: 2017/10/22 20:13:17 by nelson           ###   ########.fr       */
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
	t_stack_elem	*new_elem;

	if (!(new_elem = (t_stack_elem *)malloc(sizeof(t_stack_elem))))
	{
		if (error_addr)
			*error_addr = ft_error_bad_alloc();
		return (-1);
	}
	*error_addr = NULL;
	new_elem->value = (*create)(data, error_addr);
	if (!error_addr || *error_addr)
	{
		free(new_elem);
		return (-1);
	}
	new_elem->next = stack->top;
	stack->top = new_elem;
	stack->size++;
	return (0);
}
