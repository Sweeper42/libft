/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 17:28:02 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/13 14:08:43 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cstring.h"
#include "ft_mem.h"

inline char		*ft_strdup(
					char const *src,
					t_error_c **rrc_error)
{
	return ((char *)ft_memdup(
		(void const *)src,
		ft_strlen(src) + 1,
		rrc_error));
}
