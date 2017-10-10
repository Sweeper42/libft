/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_get_iterator_handler.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 15:31:23 by nperrin           #+#    #+#             */
/*   Updated: 2017/10/10 12:07:07 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static t_iterator_handler_c		g_list_iterator_handler___ =
{
	&ft_list_it_next,
	&ft_list_it_prev,
	&ft_list_it_move,
	&ft_list_it_rmove,
	&ft_list_it_value,
	&ft_list_it_value_p,
	&ft_list_it_equal
};

t_iterator_handler_c			*ft_list_get_iterator_handler(void)
{
	return (&g_list_iterator_handler___);
}
