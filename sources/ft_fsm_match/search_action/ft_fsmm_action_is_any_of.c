/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fsmm_action_is_any_of.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 06:33:04 by nperrin           #+#    #+#             */
/*   Updated: 2017/05/31 06:36:06 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fsm_match.h"

t_bool			ft_fsmm_action_is_any_of__(
					char c,
					char const *s)
{
	size_t		i;
	t_bool		found;

	i = 0;
	found = false;
	while (s[i] && !found)
	{
		if (s[i] == c)
			found = true;
		i++;
	}
	return (found);
}
