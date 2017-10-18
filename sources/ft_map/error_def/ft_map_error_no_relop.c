/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_error_no_relop.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 16:13:30 by nperrin           #+#    #+#             */
/*   Updated: 2017/10/18 16:14:47 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_map.h"

static t_error_c	g_map_error_no_relop =
{
	FT_MAP_ERROR_NO_RELOP,
	"Cannot create a map of value without relational operator."
};

t_error_c	*ft_map_error_no_relop(void)
{
	return (&g_map_error_no_relop);
}



