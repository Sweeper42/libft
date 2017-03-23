/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_error_list_empty.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 18:48:51 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/23 18:52:09 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static t_error_c	g_list_error_list_empty =
{
	FT_LIST_ERROR_LIST_EMPTY,
	"Accessing unavaliable value."
};

t_error_c	*ft_list_error_list_empty(void)
{
	return (&g_list_error_list_empty);
}
