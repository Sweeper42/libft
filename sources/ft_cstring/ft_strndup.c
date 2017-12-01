/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 17:31:12 by nperrin           #+#    #+#             */
/*   Updated: 2017/10/22 20:07:18 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_cstring.h"
#include "ft_mem.h"

inline char		*ft_strndup(
					char const *src,
					size_t n)
{
	char	*new_str;
	size_t	len;

	if (n > (len = ft_strlen(src)))
		n = len;
	if (!(new_str = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	new_str[n] = '\0';
	return ((char *)ft_memcpy((void *)new_str, (void const *)src, n));
}
