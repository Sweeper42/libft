/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_array_heap_sort.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 09:13:03 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/13 14:15:33 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"
#include "ft_swap.h"

#define PARENT___(X) (((X) - 1) / 2)
#define LCHILD___(X) (((X) * 2) + 1)
#define RCHILD___(X) (((X) * 2) + 2)

static inline void		sift_down___(
							int *array,
							size_t start,
							size_t end)
{
	size_t		child;
	size_t		higher;

	while ((child = LCHILD___(start)) <= end)
	{
		higher = start;
		if (array[higher] < array[child])
			higher = child;
		if ((child + 1 <= end) && (array[higher] < array[child + 1]))
			higher = child + 1;
		if (higher != start)
			ft_swap_int(array + start, array + higher);
		else
			break ;
		start = higher;
	}
}

static inline void		heapify___(
							int *array,
							size_t n)
{
	size_t	start;
	size_t	i;

	start = PARENT___(n - 1);
	i = 0;
	while (i <= start)
	{
		sift_down___(array, start - i, n - 1);
		i++;
	}
}

void					ft_int_array_heap_sort(
							int *array,
							size_t n)
{
	size_t	i;

	heapify___(array, n);
	i = 0;
	while (i < n - 1)
	{
		ft_swap_int(array + n - i - 1, array + 0);
		i++;
		sift_down___(array, 0, n - i - 1);
	}
}
