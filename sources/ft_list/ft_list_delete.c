/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_delete.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 19:00:04 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/23 19:01:19 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int		ft_list_delete(
			t_list *list,
			t_bool delete_value,
			t_error_c **error_addr)
{
	if (ft_list_clean(list, delete_value, error_addr) == -1)
		return (-1);
	free(list);
	return (0);
}
