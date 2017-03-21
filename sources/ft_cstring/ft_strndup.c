/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 17:31:12 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/21 17:36:53 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_cstring.h"
#include "ft_mem.h"

inline char		*ft_strndup(
					char const *src,
					size_t n)
{
	char	*new;
	size_t	len;

	if (n > (len = ft_strlen(src)))
		n = len;
	if (!(new = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	new[n] = '\0';
	return (ft_memcpy((void *)new, (void const *)src, n));
}
