/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 18:15:49 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/21 18:21:08 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

inline void		*ft_memset(
					void *m,
					int c,
					size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
		((unsigned char *)m)[i++] = (unsigned char)c;
	return (m);
}
