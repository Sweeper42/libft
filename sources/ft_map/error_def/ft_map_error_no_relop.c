/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_error_no_relop.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 16:13:30 by nperrin           #+#    #+#             */
/*   Updated: 2017/10/28 11:40:26 by nelson           ###   ########.fr       */
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
