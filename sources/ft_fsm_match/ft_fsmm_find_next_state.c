/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fsmm_find_next_state.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 06:51:53 by nperrin           #+#    #+#             */
/*   Updated: 2017/05/31 07:26:33 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fsm_match.h"

t_bool		ft_fsmm_find_next_state__(
				char c,
				t_fsmm_state_c *state,
				t_fsmm_state_info *next_info,
				size_t *next_state)
{
	size_t	cur_branch;
	t_bool	found;

	cur_branch = 0;
	found = false;
	while ((cur_branch < state->n_branch)
			&& !found)
	{
		if (ft_fsmm_branch_is_matching__(c, state->branchs + cur_branch))
		{
			*next_info = state->branchs[cur_branch].next_info;
			*next_state = state->branchs[cur_branch].next_state;
			found = true;
		}
		cur_branch++;
	}
	if (found && (*next_state != FT_FSMM_NULL))
		return (true);
	return (false);
}
