/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:53:15 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/17 15:58:40 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_int.h"
#include <limits.h>
#include "ft_cstring.h"

static int		ft_strtoi_neg_nb___(
					char const *str,
					char **rr_end,
					int base,
					t_error_c **rrc_error)
{
	int		value;
	int		incr;

	value = 0;
	incr = ft_digittoint(*str++);
	while ((incr >= 0) && (incr < base))
	{
		if (value < ((INT_MIN + (int)incr) / (int)base))
		{
			ft_error_set_to(rrc_error, ft_int_error_bad_conversion());
			return (-1);
		}
		value = (value * (int)base) - (int)incr;
		incr = ft_digittoint(*str++);
	}
	if (rr_end)
		*rr_end = (char *)(str - 1);
	return (value);
}

static int		ft_strtoi_pos_nb___(
					char const *str,
					char **rr_end,
					int base,
					t_error_c **rrc_error)
{
	int		value;
	int		incr;

	value = 0;
	incr = ft_digittoint(*str++);
	while ((incr >= 0) && (incr < base))
	{
		if (value > ((INT_MAX - (int)incr) / (int)base))
		{
			ft_error_set_to(rrc_error, ft_int_error_bad_conversion());
			return (-1);
		}
		value = (value * (int)base) + (int)incr;
		incr = ft_digittoint(*str++);
	}
	if (rr_end)
		*rr_end = (char *)(str - 1);
	return (value);
}

int				ft_strtoi(
					char const *str,
					char **rr_end,
					int base,
					t_error_c **rrc_error)
{
	t_bool		is_neg;

	is_neg = false;
	int_skip_space__(&str);
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		is_neg = true;
		str++;
	}
	return (is_neg
		? ft_strtoi_neg_nb___(str, rr_end, base, rrc_error)
		: ft_strtoi_pos_nb___(str, rr_end, base, rrc_error));
}
