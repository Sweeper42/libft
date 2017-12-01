/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:07:58 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/16 12:12:27 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cstring.h"

inline size_t		ft_strcspn(
						char const *s,
						char const *char_set)
{
	size_t	i;

	i = 0;
	while (s[i] && !ft_strchr((char *)char_set, s[i]))
		i++;
	return (i);
}
