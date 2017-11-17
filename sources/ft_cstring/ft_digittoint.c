/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digittoint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:53:10 by nperrin           #+#    #+#             */
/*   Updated: 2017/11/16 13:59:24 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cstring.h"

inline int		ft_digittoint(int c)
{
	if (ft_isdigit(c))
		return ((char)c - '0');
	else if (ft_islower(c))
		return ((char)c - 'a' + 10);
	else if (ft_isupper(c))
		return ((char)c - 'A' + 10);
	return (-1);
}
