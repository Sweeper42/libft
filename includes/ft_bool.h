/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bool.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 18:29:43 by nperrin           #+#    #+#             */
/*   Updated: 2017/10/22 20:03:05 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOL_H
# define FT_BOOL_H

# ifndef __cplusplus

typedef enum	e_bool
{
	false = 0,
	true = 1
}				t_bool;

# else

typedef bool	t_bool;

# endif

#endif
