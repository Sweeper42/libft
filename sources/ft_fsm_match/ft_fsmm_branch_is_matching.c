/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fsmm_branch_is_matching.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 06:43:29 by nperrin           #+#    #+#             */
/*   Updated: 2017/05/31 07:25:59 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fsm_match.h"

static t_bool (*g_search_func[FT_FSMM_N_ACTION])(char c, char const *s) =
{
	&ft_fsmm_action_is__,
	&ft_fsmm_action_is_not__,
	&ft_fsmm_action_is_any_of__,
	&ft_fsmm_action_is_none_of__,
	&ft_fsmm_action_is_zero__,
	&ft_fsmm_action_is_anything__
};

t_bool			ft_fsmm_branch_is_matching__(
					char c,
					t_fsmm_state_branch_c *branch)
{
	return (g_search_func[branch->search_action](c, branch->s));
}
