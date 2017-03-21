/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_bad_alloc.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 15:58:29 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/21 16:33:15 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_error.h"

static t_error_c	g_error_bad_alloc__ =
{
	FT_ERROR_BAD_ALLOC,
	"Bad alloc."
};

inline t_error_c	*ft_error_bad_alloc(void)
{
	return (&g_error_bad_alloc__);
}
