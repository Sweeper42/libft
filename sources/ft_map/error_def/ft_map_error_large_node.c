/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_error_large_node.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 11:40:19 by nelson            #+#    #+#             */
/*   Updated: 2017/10/28 11:41:07 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_map.h"

static t_error_c	g_map_error_large_node =
{
	FT_MAP_ERROR_LARGE_NODE,
	"Attempt to create a node larger than 4."
};

t_error_c	*ft_map_error_large_node(void)
{
	return (&g_map_error_large_node);
}
