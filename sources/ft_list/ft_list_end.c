/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_end.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 15:13:47 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/27 16:15:15 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

inline t_iterator		ft_list_end(t_list *list)
{
	return (FT_ITERATOR_CREATE(
		ft_list_get_iterator_handler(),
		(void *)list,
		(void *)&list->last,
		NULL));
}
