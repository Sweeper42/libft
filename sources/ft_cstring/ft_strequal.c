/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 17:26:12 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/16 14:00:22 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cstring.h"

inline t_bool		ft_strequal(
						char const *s1,
						char const *s2)
{
	size_t		i;

	i = 0;
	while (s1[i]
		&& (s1[i] == s2[i]))
		i++;
	return (s1[i] == s2[i]);
}
