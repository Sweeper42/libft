/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_error_merge_with_invalid_child.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 17:33:18 by nelson            #+#    #+#             */
/*   Updated: 2017/12/10 17:41:08 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set_/ft_set_error.h"

static t_error_c	g_set_error_merge_with_invalid_child___ =
{
	FT_SET_ERROR_MERGE_WITH_INVALID_CHILD,
	"ft_set: merge with an invalid child."
};

t_error_c	*ft_set_error_merge_with_invalid_child(void)
{
	return (&g_set_error_merge_with_invalid_child___);
}

