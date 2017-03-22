/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_put_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperrin <nperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 18:21:03 by nperrin           #+#    #+#             */
/*   Updated: 2017/03/22 18:25:27 by nperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_string.h"

ssize_t			ft_string_put_fd(
					t_string_c *string,
					int fd,
					t_error_c **error_addr)
{
	(void)error_addr;
	return (write(fd, string->str, string->size));
}
