/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_clean.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 19:23:21 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/22 17:11:31 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_mem.h"

inline void		ft_string_clean(
					t_string *string)
{
	ft_memdel((void **)&string->str);
	string->size = 0;
	string->alloc_size = 0;
}
