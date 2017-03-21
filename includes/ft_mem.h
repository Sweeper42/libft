/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 17:12:11 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/21 18:23:33 by nperrin          ###   ########.fr       */
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

#endif
