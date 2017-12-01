/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 17:24:10 by nperrin           #+#    #+#             */
/*   Updated: 2017/12/01 11:09:35 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_mem.h"

void			*ft_memdup(
					void const *src,
					size_t n,
					t_error_c **rrc_error)
{
	void		*new_mem;

	if (!(new_mem = (void *)ft_memalloc(sizeof(char) * n, rrc_error)))
		return (NULL);
	return (ft_memcpy(new_mem, src, n));
}
