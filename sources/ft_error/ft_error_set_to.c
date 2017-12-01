/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_set_to.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:47:43 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/16 14:50:39 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_error.h"

inline void		ft_error_set_to(
					t_error_c **rrc_error,
					t_error_c *rc_error)
{
	if (rrc_error)
		*rrc_error = rc_error;
}
