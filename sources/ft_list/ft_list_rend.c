/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_rend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 15:15:00 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/27 16:15:50 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

inline t_iterator		ft_list_rend(t_list *list)
{
	return (FT_ITERATOR_CREATE(
		ft_list_get_riterator_handler(),
		(void *)list,
		(void *)&list->first,
		NULL));
}
