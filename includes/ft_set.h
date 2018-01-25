/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 15:14:33 by nperrin           #+#    #+#             */
/*   Updated: 2018/01/25 15:48:54 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SET_H
# define FT_SET_H

# include "ft_var_handler.h"

typedef struct s_set_node	t_s_set_node;

typedef struct				s_set
{
	t_s_set_node			*ps_root;
	t_var_handler_c			*pcos_var_handler;
	size_t					usc_node;
}							t_s_set;

int							ft_set_insert(
								t_s_set		*ps_set,
								void const	*pcov_value,
								t_error_c	**hcos_error);

#endif
