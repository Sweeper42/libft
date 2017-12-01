/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 09:06:01 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/16 12:13:18 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SWAP_H
# define FT_SWAP_H

# include <stdint.h>
# include <stddef.h>

extern void		ft_swap_int(
					int	*a,
					int	*b);
extern void		ft_swap_int64(
					int64_t	*a,
					int64_t	*b);

extern void		ft_swap_size_t(
					size_t *a,
					size_t *b);

extern void		ft_swap_ptr(
					void	**a,
					void	**b);

#endif
