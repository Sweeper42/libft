/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_set_copy_to.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 15:36:50 by nperrin           #+#    #+#             */
/*   Updated: 2017/04/19 15:37:27 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

inline void					ft_list_set_copy_to(
								t_list *list,
								t_bool copy_on)
{
	list->copy_on = copy_on;
}
