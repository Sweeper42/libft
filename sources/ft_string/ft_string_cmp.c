/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_cmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 17:53:02 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/22 17:57:23 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cstring.h"
#include "ft_string.h"

int			ft_string_cmp(
				t_string_c *string,
				t_string_c *to_compare)
{
	if (string == to_compare)
		return (0);
	return (ft_strcmp(string->str, to_compare->str));
}
