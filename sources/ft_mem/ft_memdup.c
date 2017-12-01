/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 17:24:10 by nperrin           #+#    #+#             */
/*   Updated: 2017/10/22 20:07:34 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_mem.h"

void			*ft_memdup(
					void const *src,
					size_t n)
{
	void		*new_mem;

	if (!(new_mem = (void *)malloc(sizeof(char) * n)))
		return (NULL);
	return (ft_memcpy(new_mem, src, n));
}
