/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_put_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 18:21:03 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/23 15:45:43 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_string.h"

ssize_t			ft_string_put_fd(
					t_string_c *string,
					int fd,
					t_error_c **error_addr)
{
	ssize_t		ret_value;

	ret_value = write(fd, string->str, string->size);
	if (ret_value < 0)
		*error_addr = ft_error_bad_fd();
	return (ret_value);
}
