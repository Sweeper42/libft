/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 16:48:18 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/23 17:05:21 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

t_stack			*ft_stack_init(
					t_stack *to_init,
					t_var_handler_c *handler)
{
	to_init->size = 0;
	to_init->handler = handler;
	to_init->top = NULL;
	return (to_init);
}
