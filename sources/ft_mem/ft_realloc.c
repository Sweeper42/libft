/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 18:10:55 by nperrin           #+#    #+#             */
/*   Updated: 2017/10/22 20:08:03 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_mem.h"

void			*ft_realloc(
					void **mem_addr,
					size_t old_size,
					size_t new_size)
{
	void	*new_mem;
	size_t	cpy_size;

	if (old_size == new_size)
		return (*mem_addr);
	if (new_size > 0)
	{
		if (!(new_mem = malloc(sizeof(new_size) * sizeof(char))))
			return (NULL);
		cpy_size = (old_size > new_size) ? new_size : old_size;
		ft_memcpy(new_mem, *mem_addr, cpy_size);
		ft_bzero((void *)((char *)new_mem + cpy_size), new_size - cpy_size);
	}
	else
		new_mem = NULL;
	if (old_size > 0)
		free(*mem_addr);
	*mem_addr = new_mem;
	return (new_mem);
}
