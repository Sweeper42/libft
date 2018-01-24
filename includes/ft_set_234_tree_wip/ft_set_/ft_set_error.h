/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_error.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelson <nelson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 12:54:26 by nelson            #+#    #+#             */
/*   Updated: 2017/12/10 17:41:30 by nelson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SET_ERROR_H
# define FT_SET_ERROR_H

# include "ft_error.h" 

# define FT_SET_ERROR_DUPLICATE_ELEM				FT_ERROR_NEW_ERR_NUM
# define FT_SET_ERROR_EXTENDING_4_LEAF_NODE			FT_ERROR_NEW_ERR_NUM
# define FT_SET_ERROR_MERGE_WITH_INVALID_CHILD	FT_ERROR_NEW_ERR_NUM

t_error_c	*ft_set_error_duplicate_elem(void);
t_error_c	*ft_set_error_extending_4_leaf_node(void);
t_error_c	*ft_set_error_merge_with_invalid_child(void);

#endif
