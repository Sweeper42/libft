/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fsm_match.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 15:41:59 by nperrin           #+#    #+#             */
/*   Updated: 2017/05/31 07:49:49 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FSM_MATCH_H
# define FT_FSM_MATCH_H

# include "ft_error.h"
# include "ft_bool.h"

# define FT_FSMM_N_ACTION	6
# define FT_FSMM_NULL		((size_t)-1)

/*
**----------------------------| enum definition |----------------------------**
*/

typedef enum	e_fsmm_state_info
{
	fsmm_state_info_processing,
	fsmm_state_info_match_not_found,
	fsmm_state_info_match_incomplete,
	fsmm_state_info_match_found
}				t_fsmm_state_info;

typedef enum	e_fsmm_state_search_action
{
	fsmm_state_action_is,
	fsmm_state_action_is_not,
	fsmm_state_action_is_any_of,
	fsmm_state_action_is_none_of,
	fsmm_state_action_is_zero,
	fsmm_state_action_is_anything
}				t_fsmm_state_action;

/*
**--------------------------| structure definition |--------------------------**
*/

/*
**    ----------------------------| match def |-------------------------      **
*/

/*
**                                 branch info
**
** next_info IS fsmm_state_info_processing THEN
**   next_state should be != -1
**
** next_info IS fsmm_state_info_match_not_found
**           OR fsmm_state_info_match_incomplete
**   next_info should be -1
**   get_error may be call
**
** next_info IS fsmm_state_info_match_found
**   next_info should be -1
*/

typedef struct	s_fsmm_state_branch
{
	t_fsmm_state_action		search_action;
	t_fsmm_state_info		next_info;
	size_t					next_state;
	char const				*s;
}				t_fsmm_state_branch;
typedef t_fsmm_state_branch const	t_fsmm_state_branch_c;
typedef t_fsmm_state_branch_c		t_fsmm_state_branch_carr[];

typedef struct	s_fsmm_state
{
	size_t					id;
	size_t					n_branch;
	t_fsmm_state_branch_c	*branchs;
	t_error_c				*(*get_error)(void);
}				t_fsmm_state;
typedef t_fsmm_state const		t_fsmm_state_c;
typedef t_fsmm_state_c			t_fsmm_state_carr[];

typedef struct	s_fsmm_def
{
	size_t			n_state;
	t_fsmm_state_c	*states;
}				t_fsmm_def;
typedef t_fsmm_def const	t_fsmm_def_c;

/*
**    --------------------------| match resolver |----------------------      **
*/

typedef struct	s_fsmm_data
{
	size_t				cur_state;
	size_t				cur_len;
	t_fsmm_state_info	last_info;
}				t_fsmm_data;

/*
**    ---------------------------| match answer |-----------------------      **
*/

typedef struct	s_fsmm_answer
{
	t_fsmm_state_info	match_info;
	size_t				match_len;
	t_error_c			*error;
}				t_fsmm_answer;

/*
**--------------------------------| methods |---------------------------------**
*/

t_fsmm_answer	*ft_fsmm_str_match(
					t_fsmm_def_c	*match_def,
					char const		*str,
					t_fsmm_answer	*answer);

/*
**--------------------------------| private |---------------------------------**
*/

t_bool			ft_fsmm_action_is__(
					char		c,
					char const	*s);
t_bool			ft_fsmm_action_is_not__(
					char		c,
					char const	*s);
t_bool			ft_fsmm_action_is_any_of__(
					char		c,
					char const *s);
t_bool			ft_fsmm_action_is_none_of__(
					char		c,
					char const	*s);
t_bool			ft_fsmm_action_is_zero__(
					char		c,
					char const	*s);
t_bool			ft_fsmm_action_is_anything__(
					char		c,
					char const	*s);

t_bool			ft_fsmm_branch_is_matching__(
					char					c,
					t_fsmm_state_branch_c	*branch);

t_bool			ft_fsmm_find_next_state__(
					char				c,
					t_fsmm_state_c		*state,
					t_fsmm_state_info	*next_info,
					size_t				*next_state);

#endif
