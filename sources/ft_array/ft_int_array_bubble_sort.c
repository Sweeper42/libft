/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_array_bubble_sort.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 08:15:23 by nperrin           #+#    #+#             */
/*   Updated: 2017/05/31 09:11:26 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"
#include "ft_swap.h"
#include "ft_mem.h"

void		ft_int_array_bubble_sort(
				int *array,
				size_t n)
{
	t_bool	sorted;
	size_t	i;
	size_t	j;

	i = 0;
	sorted = false;
	while ((i < n - 1) && !sorted)
	{
		sorted = true;
		j = 0;
		while (j < n - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				sorted = false;
				ft_swap_int(array + j, array + j + 1);
			}
			j++;
		}
		i++;
	}
}

t_sort_stat		*ft_int_array_bubble_sort_stat(
					int *array,
					size_t n,
					t_sort_stat *stat)
{
	t_bool		sorted;
	size_t		i;
	size_t		j;

	i = 0;
	ft_bzero(stat, sizeof(t_sort_stat));
	sorted = false;
	while ((i < n - 1) && !sorted)
	{
		sorted = true;
		j = 0;
		while (j < n - i - 1)
		{
			stat->n_compared++;
			if (array[j] > array[j + 1])
			{
				stat->n_assigned++;
				sorted = false;
				ft_swap_int(array + j, array + j + 1);
			}
			j++;
		}
		i++;
	}
	return (stat);
}
