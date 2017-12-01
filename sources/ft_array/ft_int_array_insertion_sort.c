/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_array_insertion_sort.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 10:48:35 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/13 14:14:56 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"
#include "ft_mem.h"
#include "ft_swap.h"

void			ft_int_array_insertion_sort(
					int *array,
					size_t n)
{
	size_t		i;
	size_t		j;

	i = 1;
	while (i < n)
	{
		j = i;
		while ((j >= 1)
			&& (array[j] < array[j - 1]))
		{
			ft_swap_int(array + j, array + j - 1);
			j--;
		}
		i++;
	}
}

t_sort_stat		*ft_int_array_insertion_sort_stat(
					int *array,
					size_t n,
					t_sort_stat *stat)
{
	size_t		i;
	size_t		j;

	ft_bzero(stat, sizeof(t_sort_stat));
	i = 1;
	while (i < n)
	{
		j = i;
		stat->n_compared++;
		while ((j >= 1)
			&& (array[j] < array[j - 1]))
		{
			stat->n_compared++;
			stat->n_assigned++;
			ft_swap_int(array + j, array + j - 1);
			j--;
		}
		i++;
	}
	return (stat);
}
