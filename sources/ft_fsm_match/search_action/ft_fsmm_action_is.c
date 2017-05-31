/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fsmm_action_is.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 06:31:11 by nperrin           #+#    #+#             */
/*   Updated: 2017/05/31 06:31:52 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fsm_match.h"

t_bool			ft_fsmm_action_is__(
					char c,
					char const *s)
{
	return (c == *s);
}