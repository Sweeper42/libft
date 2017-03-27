/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 18:10:55 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/27 13:19:02 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_mem.h"

void			*ft_realloc(
					void **mem_addr,
					size_t old_size,
					size_t new_size)
{
	void	*new;
	size_t	cpy_size;

	if (old_size == new_size)
		return (*mem_addr);
	if (new_size > 0)
	{
		if (!(new = malloc(sizeof(new_size) * sizeof(char))))
			return (NULL);
		cpy_size = (old_size > new_size) ? new_size : old_size;
		ft_memcpy(new, *mem_addr, cpy_size);
		ft_bzero((void *)((char *)new + cpy_size), new_size - cpy_size);
	}
	else
		new = NULL;
	if (old_size > 0)
		free(*mem_addr);
	*mem_addr = new;
	return (new);
}
