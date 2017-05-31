/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_array_heap_sort_stat.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 10:17:17 by nperrin           #+#    #+#             */
/*   Updated: 2017/05/31 10:22:36 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"
#include "ft_array.h"
#include "ft_swap.h"

#define PARENT___(X) (((X) - 1) / 2)
#define LCHILD___(X) (((X) * 2) + 1)
#define RCHILD___(X) (((X) * 2) + 2)

static inline void		sift_down___(
							int *array,
							size_t start,
							size_t end,
							t_sort_stat *stat)
{
	size_t		child;
	size_t		higher;

	while ((child = LCHILD___(start)) <= end)
	{
		higher = start;
		stat->n_compared++;
		if (array[higher] < array[child])
			higher = child;
		if (child + 1 <= end)
		{
			stat->n_compared++;
			if (array[higher] < array[child + 1])
				higher = child + 1;
		}
		if (higher != start)
		{
			stat->n_assigned++;
			ft_swap_int(array + start, array + higher);
		}
		else
			break ;
		start = higher;
	}
}

static inline void		heapify___(
							int *array,
							size_t n,
							t_sort_stat *stat)
{
	size_t	start;
	size_t	i;

	start = PARENT___(n - 1);
	i = 0;
	while (i <= start)
	{
		sift_down___(array, start - i, n - 1, stat);
		i++;
	}
}

t_sort_stat		*ft_int_array_heap_sort_stat(
					int *array,
					size_t n,
					t_sort_stat *stat)
{
	size_t	i;

	ft_bzero(stat, sizeof(t_sort_stat));
	heapify___(array, n, stat);
	i = 0;
	while (i < n - 1)
	{
		ft_swap_int(array + n - i - 1, array + 0);
		i++;
		sift_down___(array, 0, n - i - 1, stat);
	}
	return (stat);
}

