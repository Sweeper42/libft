/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 17:28:02 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/21 17:34:27 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cstring.h"
#include "ft_mem.h"

inline char		*ft_strdup(char const *src)
{
	return ((char *)ft_memdup((void const *)src, ft_strlen(src) + 1));
}
