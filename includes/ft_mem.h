/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 17:12:11 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/21 17:24:00 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEM_H
# define FT_MEM_H

# include <stddef.h>

extern void		*ft_memchr(
					void	*m,
					int		c,
					size_t	n);

extern void		*ft_memcpy(
					void		*dst,
					void const *src,
					size_t		n);
extern void		*ft_memdup(
					void const	*src,
					size_t		n);

#endif
