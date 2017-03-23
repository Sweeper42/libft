/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_from_cstring.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 18:09:30 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/23 18:25:29 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

t_string		*ft_string_from_cstring(
					char const *cstring,
					t_error_c **error_addr)
{
	return (ft_string_new3(cstring, FT_STRING_NPOS, error_addr));
}
