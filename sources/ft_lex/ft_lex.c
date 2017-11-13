/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:14:50 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/13 14:22:22 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** typedef struct				s_lex_dfa
** {
** 	void					*(*create_lexem)(t_error_c **);
** 	uint16_t				n_lexem;
** 	int						(**init_lexem)(void *, char const *, t_error_c **);
** 	uint16_t				last_state;
** 	uint16_t				char_set[128];
** 	uint16_t				*base;
** 	uint16_t				*def;
** 	uint16_t				*next;
** 	uint16_t				*check;
** 	uint16_t				*accept;
** }							t_lex_dfa;
*/

#include "ft_lex.h"
/*
** t_lex_answ		ft_lex(
**					t_lex_dfa_c *rc_dfa,
**					char *s,
**					t_list *r_token_list,
**					t_error_c **rrc_error)
** {
**	t_bool		terminated;
**	uint16_t	cur_state;
**	uint16_t	cur_group;
**	char		*cur_pos;
**	char		*last_token_end;
**	uint16_t	last_token_id;
**
**	last_token_end = s;
**	last_token_id = 0;
**	cur_pos = s;
**	cur_state = 0;
**	terminated = *cur_pos != 0;
**	while (!terminated)
**	{
**		cur_group = rc_dfa->char_set[*cur_pos];
**		while (rc_dfa->check[rc_dfa->base[cur_state] + cur_group] != cur_state)
**			cur_state = rc_dfa->def[cur_state];
**		if (cur_state == rc_dfa->last_state)
**		{
**			if (last_token_end != cur_pos)
**			{
**				;
**				s = last_token_end;
**				cur_pos = last_token_end;
**				cur_state = 0;
**			}
**			else
**				terminated = true;
**			continue ;
**		}
**		cur_state = rc_dfa->next[rc_dfa->base[cur_state] + cur_group];
**		if (rc_dfa->accept[cur_state])
**		{
**			last_token_id = rc_dfa->accept[cur_state];
**			last_token_end = cur_pos + 1;
**		}
**	}
** }
*/
