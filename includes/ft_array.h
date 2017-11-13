/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 08:00:49 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/13 14:35:25 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARRAY_H
# define FT_ARRAY_H

# include <stddef.h>
# include <stdint.h>
# include "ft_error.h"
# include "ft_bool.h"

typedef struct	s_sort_stat
{
	size_t		n_compared;
	size_t		n_assigned;
}				t_sort_stat;

void			ft_int_array_fill_rand(
					int		*array,
					size_t	n,
					int max_value);

void			ft_int_array_bubble_sort(
					int		*array,
					size_t	n);
t_sort_stat		*ft_int_array_bubble_sort_stat(
					int			*array,
					size_t		n,
					t_sort_stat	*stat);

void			ft_int_array_heap_sort(
					int		*array,
					size_t	n);
t_sort_stat		*ft_int_array_heap_sort_stat(
					int *array,
					size_t n,
					t_sort_stat *stat);

void			ft_int_array_insertion_sort(
					int *array,
					size_t n);
t_sort_stat		*ft_int_array_insertion_sort_stat(
					int *array,
					size_t n,
					t_sort_stat *stat);

extern int		ft_array_int_dup(
					int			*array,
					size_t		size,
					int			**r_target,
					t_error_c	**rrc_error);

extern int		ft_array_int64_dup(
					int64_t			*array,
					size_t		size,
					int64_t			**r_target,
					t_error_c	**rrc_error);

#endif
