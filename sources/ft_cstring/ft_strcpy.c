/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 16:41:58 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/21 16:55:58 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cstring.h"

inline char			*ft_strcpy(
						char *dst,
						char const *src)
{
	size_t	i;

	i = 0;
	while ((dst[i] = src[i]))
		i++;
	return (dst);
}
