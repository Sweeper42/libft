/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 17:31:12 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/13 14:09:44 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_cstring.h"
#include "ft_mem.h"

inline char		*ft_strndup(
					char const *src,
					size_t n,
					t_error_c **rrc_error)
{
	char	*new;
	size_t	len;

	if (n > (len = ft_strlen(src)))
		n = len;
	if (!(new = (char *)malloc(sizeof(char) * (n + 1))))
	{
		if (rrc_error)
			*rrc_error = ft_error_bad_alloc();
		return (NULL);
	}
	new[n] = '\0';
	return (ft_memcpy((void *)new, (void const *)src, n));
}
