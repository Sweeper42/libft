/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_int64_dup.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:29:46 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/13 14:37:09 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"
#include "ft_mem.h"

inline int			ft_array_int64_dup(
				int64_t *array,
				size_t size,
				int64_t **r_target,
				t_error_c **rrc_error)
{
	if (!(*r_target = (int64_t *)ft_memdup(array, size * sizeof(int64_t),
											rrc_error)))
		return (-1);
	return (0);
}
