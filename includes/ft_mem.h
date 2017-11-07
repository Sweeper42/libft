/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 17:12:11 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/07 11:37:12 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEM_H
# define FT_MEM_H

# include <stddef.h>
# include "ft_error.h"

extern void		*ft_memchr(
					void	*m,
					int		c,
					size_t	n);

extern void		*ft_memcpy(
					void		*dst,
					void const *src,
					size_t		n);
extern void		*ft_memset(
					void	*m,
					int		c,
					size_t	n);
extern void		*ft_bzero(
					void *m,
					size_t n);

void			*ft_memdup(
					void const	*src,
					size_t		n);

void			*ft_realloc(
					void	**mem_addr,
					size_t	old_size,
					size_t	new_size);
extern void		*ft_reallocf(
					void	**mem_addr,
					size_t	old_size,
					size_t	new_size);

extern void		ft_memdel(void **to_del_addr);

extern void		*ft_memcalloc(
					size_t		n,
					size_t		size,
					t_error_c	**rrc_error);

extern void		*ft_memalloc(
					size_t		n,
					t_error_c	**rrc_error);

#endif
