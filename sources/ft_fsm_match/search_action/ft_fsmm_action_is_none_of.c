/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fsmm_action_is_none_of.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 06:35:46 by nperrin           #+#    #+#             */
/*   Updated: 2017/05/31 07:15:56 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fsm_match.h"

t_bool			ft_fsmm_action_is_none_of__(
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
	return (!found);
}
