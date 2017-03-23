/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 19:13:15 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/23 19:20:28 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

inline void		*ft_list_back(
					t_list *list,
					t_error_c **error_addr)
{
	if (list->size == 0)
	{
		if (error_addr)
			*error_addr = ft_list_error_list_empty();
		return (NULL);
	}
	return (list->last.prev->value);
}
