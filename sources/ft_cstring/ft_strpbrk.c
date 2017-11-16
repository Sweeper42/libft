/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:35:13 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/16 12:40:06 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cstring.h"

inline char		*ft_strpbrk(
					char const *s,
					char const *char_set)
{
	while (*s && !ft_strchr((char *)char_set, *s))
		s++;
	return ((char *)s);
}
