/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtou64.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:45:16 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/17 16:03:04 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_int.h"
#include "ft_cstring.h"

uint64_t		ft_strtou64(
					char const *str,
					char **rr_end,
					int base,
					t_error_c **rrc_error)
{
	uint64_t	value;
	int			incr;

	value = 0;
	int_skip_space__(&str);
	incr = ft_digittoint(*str++);
	while ((incr >= 0) && (incr < base))
	{
		if (value > ((UINT64_MAX - (uint64_t)incr) / base))
		{
			ft_error_set_to(rrc_error, ft_int_error_bad_conversion());
			return (-1);
		}
		value = (value * (uint64_t)base) + (uint64_t)incr;
		incr = ft_digittoint(*str++);
	}
	if (rr_end)
		*rr_end = (char *)(str - 1);
	return (value);
}
