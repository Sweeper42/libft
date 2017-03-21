/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 17:24:10 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/21 17:26:58 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_mem.h"

inline void		*ft_memdup(
					void const *src,
					size_t n)
{
	void		*new;

	if (!(new = (void *)malloc(sizeof(char) * n)))
		return (NULL);
	return (ft_memcpy(new, src, n));
}
