/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 18:44:51 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/23 18:51:06 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list						*ft_list_init(
								t_list *to_init,
								t_var_handler_c *handler)
{
	to_init->size = 0;
	to_init->handler = handler;
	to_init->first = (t_list_elem){NULL, &to_init->last, NULL};
	to_init->last = (t_list_elem){&to_init->first, NULL, NULL};
	return (to_init);
}
