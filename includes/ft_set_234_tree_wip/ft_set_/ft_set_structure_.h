/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_structure_.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 11:00:48 by nelson            #+#    #+#             */
/*   Updated: 2018/01/23 15:44:55 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SET_STRUCTURES__H
# define FT_SET_STRUCTURES__H

# include <stddef.h>
# include "ft_var_handling.h"

typedef union u_set_node		t_u_set_node;

typedef struct					s_set
{
	size_t						usc_elem;
	size_t						usc_height;
	t_u_set_node				*pu_root;
	t_var_handler_c				*pcos_elem_handler;
}								t_s_set;

#endif
