/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_int_dup.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 13:53:52 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/13 14:12:17 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"
#include "ft_mem.h"

inline int			ft_array_int_dup(
				int *array,
				size_t size,
				int **r_target,
				t_error_c **rrc_error)
{
	if (!(*r_target = (int *)ft_memdup(array, size * sizeof(int), rrc_error)))
		return (-1);
	return (0);
}
