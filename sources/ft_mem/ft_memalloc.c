/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:28:41 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/07 11:36:49 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_error.h"

inline void		*ft_memalloc(
					size_t n,
					t_error_c **rrc_error)
{
	void	*mem;

	if (!(mem = malloc(n)))
	{
		if (rrc_error)
			*rrc_error = ft_error_bad_alloc();
	}
	return (mem);
}
