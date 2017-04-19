/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_error_no_value_found.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 17:15:57 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/27 17:22:04 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

static t_error_c	g_string_error_no_value_found =
{
	FT_STRING_ERROR_NO_VALUE_FOUND,
	"String: No value found."
};

t_error_c	*ft_string_error_no_value_found(void)
{
	return (&g_string_error_no_value_found);
}
