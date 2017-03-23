/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_bad_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 15:41:03 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/23 15:43:54 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_error.h"

static t_error_c	g_error_bad_fd__ =
{
	FT_ERROR_BAD_FD,
	"Bad fd."
};

t_error_c			*ft_error_bad_fd(void)
{
	return (&g_error_bad_fd__);
}
