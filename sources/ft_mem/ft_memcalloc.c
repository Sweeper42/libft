/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcalloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:31:33 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/07 11:36:58 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"
#include <stdlib.h>

inline void		*ft_memcalloc(
					size_t n,
					size_t size,
					t_error_c **rrc_error)
{
	void		*mem;

	if ((mem = ft_memalloc(n * size, rrc_error)))
		ft_bzero(mem, n * size);
	return (mem);
}
