/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_cpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 17:55:29 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/22 18:02:16 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

int			ft_string_cpy(
				t_string_c *string,
				t_string *target,
				t_error_c **error_addr)
{
	t_string	tmp;

	if (string == target)
		return (0);
	if (!ft_string_init2(
		&tmp,
		string,
		FT_SUB_STRING_ALL,
		error_addr))
		return (-1);
	ft_string_clean(target);
	*target = tmp;
	return (0);
}
