/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reallocf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 18:23:43 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/21 18:25:33 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

inline void		*ft_reallocf(
					void **mem_addr,
					size_t old_size,
					size_t new_size)
{
	if (!ft_realloc(mem_addr, old_size, new_size))
		ft_memdel(mem_addr);
	return (*mem_addr);
}
