/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_array_fill_rand.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 08:22:40 by nperrin           #+#    #+#             */
/*   Updated: 2017/05/31 08:31:33 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_array.h"

void		ft_int_array_fill_rand(
				int *array,
				size_t n,
				int max_value)
{
	size_t		i;

	i = 0;
	while (i < n)
		array[i++] = ((long)rand() * max_value) / RAND_MAX;
}
