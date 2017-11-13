/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lex_action_table_to_dfa__.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:24:32 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/13 14:35:56 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lex.h"
#include "ft_mem.h"
#include <stdlib.h>
#include <stdio.h>

static void				fill_state_point_table___(
							uint16_t *r_state_point,
							t_lext_action_table *r_action_table)
{
	uint16_t	cur_state;
	uint16_t	i;
	uint16_t	j;

	cur_state = 0;
	while (cur_state < r_action_table->n_state - 1)
	{
		i = cur_state + 1;
		while (i < r_action_table->n_state)
		{
			j = 0;
			while (j < r_action_table->n_input - 1)
			{
				if (r_action_table->table[cur_state][j]
					== r_action_table->table[i][j])
				{
					r_state_point[cur_state]++;
					r_state_point[i]++;
				}
				j++;
			}
			i++;
		}
		cur_state++;
	}
}

static t_input_data		find_bigest_occurence___(
							uint16_t *count_array,
							uint16_t n)
{
	uint16_t		i;
	t_input_data	ret;

	ret.most_used_state = 0;
	ret.n = 0;
	i = 0;
	while (i < n + 1)
	{
		if (count_array[i] > ret.n)
		{
			ret.most_used_state = i;
			ret.n = count_array[i];
		}
		printf("count_array[%u]: %u\n", i, count_array[i]);
		i++;
	}
	return (ret);
}

static void				fill_input_point_table___(
							t_input_data *r_input_point,
							t_lext_action_table *r_action_table)
{
	uint16_t	count_array[128];
	uint16_t	input_id;
	uint16_t	state_id;

	input_id = 0;
	while (input_id < r_action_table->n_input)
	{
		state_id = 0;
		ft_bzero(count_array, sizeof(uint16_t) * 128);
		while (state_id < r_action_table->n_state)
		{
			printf("stateid: %u value: %u\n", state_id,
				r_action_table->table[state_id][input_id]);
			count_array[r_action_table->table[state_id][input_id]]++;
			state_id++;
		}
		r_input_point[input_id] =
			find_bigest_occurence___(count_array, r_action_table->n_state);
		input_id++;
	}
}

static void				print_state_table___(
							uint16_t *r_state_point,
							uint16_t size)
{
	uint16_t	i;

	i = 0;
	while (i < size)
	{
		printf("state[%u] point: %u\n", i, r_state_point[i]);
		i++;
	}
}

static void				print_input_table___(
							t_input_data *r_input_point,
							uint16_t size)
{
	uint16_t	i;

	i = 0;
	while (i < size)
	{
		printf("input[%u] state_id:%u n: %u\n", i,
			r_input_point[i].most_used_state, r_input_point[i].n);
		i++;
	}
}

int						ft_lex_action_table_to_dfa__(
							t_lext_action_table *r_action_table,
							t_lex_dfa *r_dfa,
							t_error_c **rrc_error)
{
	uint16_t		*state_point;
	t_input_data	*input_point;

	(void)r_dfa;
	state_point = ft_memcalloc(
		r_action_table->n_state, sizeof(uint16_t), rrc_error);
	if (!state_point)
		return (-1);
	input_point =
		ft_memcalloc(r_action_table->n_input,
			sizeof(t_input_data), rrc_error);
	if (!input_point)
	{
		free(state_point);
		return (-1);
	}
	fill_state_point_table___(state_point, r_action_table);
	fill_input_point_table___(input_point, r_action_table);
	print_state_table___(state_point, r_action_table->n_state);
	print_input_table___(input_point, r_action_table->n_input);
	free(state_point);
	free(input_point);
	return (0);
}
