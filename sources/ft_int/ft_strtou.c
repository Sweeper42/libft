/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtou.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:54:45 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/17 15:58:28 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_int.h"
#include <limits.h>
#include "ft_cstring.h"

unsigned		ft_strtou(
					char const *str,
					char **rr_end,
					int base,
					t_error_c **rrc_error)
{
	unsigned	value;
	int			incr;

	value = 0;
	int_skip_space__(&str);
	incr = ft_digittoint(*str++);
	while ((incr >= 0) && (incr < base))
	{
		if (value > ((UINT_MAX - (unsigned)incr) / base))
		{
			ft_error_set_to(rrc_error, ft_int_error_bad_conversion());
			return (-1);
		}
		value = (value * (unsigned)base) + (unsigned)incr;
		incr = ft_digittoint(*str++);
	}
	if (rr_end)
		*rr_end = (char *)(str - 1);
	return (value);
}
