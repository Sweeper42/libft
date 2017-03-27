/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cstring.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 15:50:38 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/27 17:14:32 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CSTRING_H
# define FT_CSTRING_H

# include <stddef.h>
# include "ft_bool.h"

extern size_t		ft_strlen(char const *s);

extern char			*ft_strcpy(
						char		*dst,
						char const *src);

extern char			*ft_strdup(char const *src);
extern char			*ft_strndup(
						char const	*src,
						size_t		n);

char				*ft_strchr(
						char	*s,
						int		c);

int					ft_strcmp(
						char const	*s1,
						char const	*s2);
t_bool				ft_strequal(
						char const	*s1,
						char const	*s2);

extern t_bool		ft_isdigit(int c);

#endif
