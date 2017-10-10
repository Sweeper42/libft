/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_error_bad_iterator.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 14:03:37 by nelson            #+#    #+#             */
/*   Updated: 2017/10/10 14:05:31 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static t_error_c	g_list_error_bad_iterator =
{
	FT_LIST_ERROR_BAD_ITERATOR,
	"Somehow you try to destroy/move/get an invalid iterator."
};

t_error_c	*ft_list_error_bad_iterator(void)
{
	return (&g_list_error_bad_iterator);
}
