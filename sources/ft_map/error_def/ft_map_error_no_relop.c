/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_error_no_relop.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 16:13:30 by nperrin           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2017/10/28 11:40:26 by nelson           ###   ########.fr       */
=======
/*   Updated: 2017/11/13 14:27:07 by nperrin          ###   ########.fr       */
>>>>>>> c0792a7f136388f5dbef201ce19c35d21daa6b52
/*                                                                            */
/* ************************************************************************** */

#include "ft_map.h"

static t_error_c	g_map_error_no_relop =
{
	FT_MAP_ERROR_NO_RELOP,
	"Cannot create a map of value without relational operator."
};

t_error_c	*ft_map_error_no_relop(void)
{
	return (&g_map_error_no_relop);
}
