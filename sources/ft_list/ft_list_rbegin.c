/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_rbegin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 15:14:13 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/27 16:15:58 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

inline t_iterator		ft_list_rbegin(t_list *list)
{
	return (FT_ITERATOR_CREATE(
		ft_list_get_riterator_handler(),
		(void *)list,
		(void *)list->last.prev,
		NULL));
}
