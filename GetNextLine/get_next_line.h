/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <tkelsie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 20:37:13 by tkelsie           #+#    #+#             */
/*   Updated: 2019/05/29 20:37:17 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 4

# include "libft/libft.h"

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct			s_chars
{
	char				*content;
	int					number;
	size_t				content_size;
	struct s_chars		*next;
}						t_chars;

int						get_next_line(const int fd, char **line);

#endif
