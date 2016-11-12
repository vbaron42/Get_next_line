/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 22:33:32 by vbaron            #+#    #+#             */
/*   Updated: 2016/11/12 04:05:39 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft/libft.h"

# include <fcntl.h>

# define BUFF_SIZE 8
# define BUFF_MAX 32000
# define MAXFILE 2048

int				get_next_line(int const fd, char **line);
#endif
