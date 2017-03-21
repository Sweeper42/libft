/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 18:08:12 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/21 18:09:37 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_mem.h"

inline void		ft_memdel(void **to_del_addr)
{
	if (*to_del_addr)
	{
		free(*to_del_addr);
		*to_del_addr = NULL;
	}
}
