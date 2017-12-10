/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_error_duplicate_elem.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 12:54:55 by nelson            #+#    #+#             */
/*   Updated: 2017/12/10 13:25:25 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_/ft_set_error.h"

static t_error_c	g_set_error_duplicate_elem___ =
{
	FT_SET_ERROR_DUPLICATE_ELEM,
	"ft_set: duplicate value."
};

t_error_c	*ft_set_error_duplicate_elem(void)
{
	return (&g_set_error_duplicate_elem___);
}
