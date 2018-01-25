/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_error_duplicate_value.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 16:21:01 by nperrin           #+#    #+#             */
/*   Updated: 2018/01/24 16:26:03 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_/ft_set_error_.h"

static t_error_c	g_s_set_error_duplicate_value =
{
	FT_SET_ERROR_DUPLICATE_VALUE,
	"ft_set ERROR: Duplicate elem."
};

t_error_c			*ft_set_error_duplicate_value(void)
{
	return (&g_s_set_error_duplicate_value);
}
