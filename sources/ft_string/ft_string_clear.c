/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_clear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 19:23:21 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/21 19:29:00 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_mem.h"

inline void		ft_string_clear(
					t_string *string)
{
	ft_memdel((void **)&string->str);
	string->size = 0;
	string->alloc_size = 0;
}
