/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_no_dup.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 15:24:12 by nperrin           #+#    #+#             */
/*   Updated: 2017/04/19 15:25:34 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_error.h"

static t_error_c	g_error_no_dup__ =
{
	FT_ERROR_NO_DUP,
	"No dup method available."
};

t_error_c			*ft_error_no_dup(void)
{
	return (&g_error_no_dup__);
}
