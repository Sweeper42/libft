/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoi64.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:41:31 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/17 15:57:46 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_int.h"
#include "ft_cstring.h"

static int64_t	ft_strtoi64_neg_nb___(
					char const *str,
					char **rr_end,
					int base,
					t_error_c **rrc_error)
{
	int64_t	value;
	int		incr;

	value = 0;
	incr = ft_digittoint(*str++);
	while ((incr >= 0) && (incr < base))
	{
		if (value < ((INT64_MIN + (int64_t)incr) / (int64_t)base))
		{
			ft_error_set_to(rrc_error, ft_int_error_bad_conversion());
			return (-1);
		}
		value = (value * (int64_t)base) - (int64_t)incr;
		incr = ft_digittoint(*str++);
	}
	if (rr_end)
		*rr_end = (char *)(str - 1);
	return (value);
}

static int64_t	ft_strtoi64_pos_nb___(
					char const *str,
					char **rr_end,
					int base,
					t_error_c **rrc_error)
{
	int64_t	value;
	int		incr;

	value = 0;
	incr = ft_digittoint(*str++);
	while ((incr >= 0) && (incr < base))
	{
		if (value > ((INT64_MAX - (int64_t)incr) / (int64_t)base))
		{
			ft_error_set_to(rrc_error, ft_int_error_bad_conversion());
			return (-1);
		}
		value = (value * (int64_t)base) + (int64_t)incr;
		incr = ft_digittoint(*str++);
	}
	if (rr_end)
		*rr_end = (char *)(str - 1);
	return (value);
}

int64_t			ft_strtoi64(
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
		? ft_strtoi64_neg_nb___(str, rr_end, base, rrc_error)
		: ft_strtoi64_pos_nb___(str, rr_end, base, rrc_error));
}
