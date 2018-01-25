/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_structure_.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 15:38:10 by nperrin           #+#    #+#             */
/*   Updated: 2018/01/25 15:47:11 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SET_STRUCTURE__H
# define FT_SET_STRUCTURE__H

# include "ft_set_node_structure_.h"
# include "ft_var_handling.h"

typedef struct		s_set
{
	t_s_set_node	*ps_root;
	t_var_handler_c	*pcos_var_handler;
	size_t			usc_node;
}					t_s_set;

#endif
