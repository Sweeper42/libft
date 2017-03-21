/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 17:12:49 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/21 17:18:10 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

inline void		*ft_memchr(
					void *m,
					int c,
					size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)m)[i] == (unsigned char)c)
			return ((void *)((unsigned char *)m + i));
		i++;
	}
	return (NULL);
}
