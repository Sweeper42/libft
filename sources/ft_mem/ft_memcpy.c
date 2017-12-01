/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 17:21:22 by nperrin           #+#    #+#             */
/*   Updated: 2017/10/22 20:06:13 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

inline void		*ft_memcpy(
					void *dst,
					void const *src,
					size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((char const *)src)[i];
		i++;
	}
	return (dst);
}
