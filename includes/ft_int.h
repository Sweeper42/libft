/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:46:34 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/17 15:59:22 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_INT_H
# define FT_INT_H

# include <stdint.h>
# include "ft_error.h"

/*
**------------------------|        errors id         |------------------------**
*/

# define FT_INT_ERROR_BAD_CONVERSION	FT_ERROR_NEW_ERR_NUM

/*
**--------------------------| conversion function |---------------------------**
*/

uint64_t			ft_strtou64(
						char const	*str,
						char		**rr_end,
						int			base,
						t_error_c	**rrc_error);
int64_t				ft_strtoi64(
						char		const *str,
						char		**rr_end,
						int			base,
						t_error_c	**rrc_error);

int					ft_strtoi(
						char		const *str,
						char		**rr_end,
						int			base,
						t_error_c	**rrc_error);

/*
**------------------------|          errors          |------------------------**
*/

t_error_c			*ft_int_error_bad_conversion(void);

/*
** other
*/

extern void			int_skip_space__(char const **r_s);

#endif
