/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 17:24:10 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/13 14:02:36 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_mem.h"

void			*ft_memdup(
					void const *src,
					size_t n,
					t_error_c **rrc_error)
{
	void		*new;

	if (!(new = (void *)malloc(sizeof(char) * n)))
	{
		if (rrc_error)
			*rrc_error = ft_error_bad_alloc();
		return (NULL);
	}
	return (ft_memcpy(new, src, n));
}
