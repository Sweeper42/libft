/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_error_invalid_init.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 16:04:19 by nperrin           #+#    #+#             */
/*   Updated: 2017/10/18 16:13:44 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_map.h"

static t_error_c	g_map_error_invalid_init =
{
	FT_MAP_ERROR_INVALID_INIT,
	"Cannot create a map of value without dup & delete methods."
};

t_error_c	*ft_map_error_invalid_init(void)
{
	return (&g_map_error_invalid_init);
}
