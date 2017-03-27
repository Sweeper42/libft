/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_it_equal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 15:29:00 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/27 15:41:12 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_bool			ft_list_it_equal(
					t_iterator_c *it,
					t_iterator_c *to_compare)
{
	return (it->data1 == to_compare->data1);
}
