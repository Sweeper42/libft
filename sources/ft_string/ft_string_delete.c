/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_delete.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 19:25:36 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/22 16:48:55 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

int						ft_string_delete(
							t_string *string,
							t_error_c **error_addr)
{
	ft_string_clear(string);
	free(string);
	(void)error_addr;
	return (0);
}
