/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fsmm_str_match.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 18:18:10 by nperrin           #+#    #+#             */
/*   Updated: 2017/05/31 07:29:34 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fsm_match.h"

static void				init_fsmm_data___(t_fsmm_data *data)
{
	data->cur_len = 0;
	data->cur_state = 0;
	data->last_info = fsmm_state_info_processing;
}

static t_fsmm_answer	*create_answer___(
							t_fsmm_answer *answer,
							t_fsmm_state_info match_info,
							size_t match_len,
							t_error_c *error)
{
	answer->match_info = match_info;
	answer->match_len = match_len;
	answer->error = error;
	return (answer);
}

t_fsmm_answer			*ft_fsmm_str_match(
							t_fsmm_def_c *match_def,
							char const *str,
							t_fsmm_answer *answer)
{
	t_fsmm_data			data;
	t_fsmm_state_info	next_state_info;
	size_t				next_state;

	init_fsmm_data___(&data);
	while (data.last_info == fsmm_state_info_processing)
	{
		if (ft_fsmm_find_next_state__(
			str[data.cur_len],
			match_def->states + data.cur_state,
			&next_state_info, &next_state))
		{
			if (next_state_info == fsmm_state_info_processing)
				data.cur_len++;
		}
		data.last_info = next_state_info;
		if (next_state != FT_FSMM_NULL)
			data.cur_state = next_state;
	}
	if ((data.last_info != fsmm_state_info_match_found)
		&& (match_def->states[data.cur_state].get_error != NULL))
		return (create_answer___(answer, data.last_info, data.cur_len,
			match_def->states[data.cur_state].get_error()));
	else
		return (create_answer___(answer, data.last_info, data.cur_len, NULL));
}
