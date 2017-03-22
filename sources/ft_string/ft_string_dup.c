/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_dup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 17:03:36 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/22 17:52:26 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int			ft_string_dup(
				t_string_c *string,
				t_string **target,
				t_error_c **error_addr)
{
	*target = ft_string_new2(
		string,
		FT_SUB_STRING(0, FT_STRING_NPOS),
		error_addr);
	if (!*target)
		return (-1);
	return (0);
}
