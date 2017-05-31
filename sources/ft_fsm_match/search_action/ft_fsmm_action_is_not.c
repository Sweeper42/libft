/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fsmm_action_is_not.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 06:32:18 by nperrin           #+#    #+#             */
/*   Updated: 2017/05/31 07:16:04 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fsm_match.h"

t_bool			ft_fsmm_action_is_not__(
					char c,
					char const *s)
{
	return (c != *s);
}
