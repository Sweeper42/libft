/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_error_no_delete.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 18:48:29 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/23 18:52:08 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static t_error_c	g_list_error_no_delete =
{
	FT_LIST_ERROR_NO_DELETE,
	"Using unexisting delete method."
};

t_error_c	*ft_list_error_no_delete(void)
{
	return (&g_list_error_no_delete);
}
