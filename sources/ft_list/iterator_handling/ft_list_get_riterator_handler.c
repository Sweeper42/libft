/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_get_riterator_handler.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 15:34:01 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/27 15:42:29 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static t_iterator_handler_c		g_list_riterator_handler___ =
{
	&ft_list_it_prev,
	&ft_list_it_next,
	&ft_list_it_rmove,
	&ft_list_it_move,
	&ft_list_it_value,
	&ft_list_it_equal
};

t_iterator_handler_c			*ft_list_get_riterator_handler(void)
{
	return (&g_list_riterator_handler___);
}
