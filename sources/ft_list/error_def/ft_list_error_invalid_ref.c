/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_error_invalid_ref.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 13:34:11 by nelson            #+#    #+#             */
/*   Updated: 2017/10/10 13:39:02 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static t_error_c	g_list_error_invalid_ref =
{
	FT_LIST_ERROR_INVALID_REF,
	"Cannot create a reference list without dup & delete methods."
};

t_error_c	*ft_list_error_invalid_ref(void)
{
	return (&g_list_error_invalid_ref);
}
