/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 17:12:11 by nperrin           #+#    #+#             */
/*   Updated: 2017/10/22 20:06:16 by nelson           ###   ########.fr       */
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
