/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_delete.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 17:11:09 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/23 17:12:55 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stack.h"

int			ft_stack_delete(
				t_stack *stack,
				t_bool delete_value,
				t_error_c **error_addr)
{
	if (ft_stack_clean(stack, delete_value, error_addr) == -1)
		return (-1);
	free(stack);
	return (0);
}
