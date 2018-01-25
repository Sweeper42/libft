/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_error_.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 16:21:25 by nperrin           #+#    #+#             */
/*   Updated: 2018/01/24 16:24:25 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SET_ERROR__H
# define FT_SET_ERROR__H

# include "ft_error.h"

# define FT_SET_ERROR_DUPLICATE_VALUE	FT_ERROR_NEW_ERR_NUM

t_error_c			*ft_set_error_duplicate_value(void);

#endif
