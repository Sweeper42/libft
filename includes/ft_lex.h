/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lex.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 08:38:47 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/13 14:12:58 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LEX_H
# define FT_LEX_H

# include "ft_error.h"
# include "ft_list.h"
# include <stdint.h>

/*
** WIP
** ft_lex
** ft_lex_create_dfa
*/

typedef enum				e_lex_end_state
{
	FT_LEX_TERMINATED,
	FT_LEX_PENDING
}							t_lex_end_state;

typedef struct				s_lex_dfa
{
	void					*(*create_lexem)(t_error_c **);
	uint16_t				n_lexem;
	int						(**init_lexem)(void *, char const *, t_error_c **);
	uint16_t				last_state;
	uint16_t				char_set[128];
	uint16_t				*base;
	uint16_t				*def;
	uint16_t				*next;
	uint16_t				*check;
	uint16_t				*accept;
}							t_lex_dfa;

typedef struct				s_lex_action_table
{
	uint16_t				n_state;
	uint16_t				n_input;
	uint16_t				**table;
}							t_lext_action_table;

typedef struct				s_lex_dfa_definition
{
	void					*(*create_lexem)(t_error_c **);
	uint16_t				n_lexem;
	int						(**init_lexem)(void *, char const *, t_error_c **);
	char const				**lexem_def;
}							t_lex_dfa_def;

typedef t_lex_dfa_def const	t_lex_dfa_def_c;

typedef struct				s_lex_answer
{
	int						state;
	size_t					last_match;
}							t_lex_answ;

typedef const t_lex_dfa		t_lex_dfa_c;

t_lex_answ					ft_lex(
								t_lex_dfa_c	*rc_dfa,
								char const	*s,
								t_list		*r_token_list,
								t_error_c	**rrc_error);

t_lex_dfa					*ft_lex_create_dfa(
								t_lex_dfa_def_c	dfa_def,
								t_error_c		*rrc_error);

t_lext_action_table			*ft_lex_get_action_table__(void);

int							ft_lex_action_table_to_dfa__(
								t_lext_action_table		*r_action_table,
								t_lex_dfa				*r_dfa,
								t_error_c				**rrc_error);

#endif
