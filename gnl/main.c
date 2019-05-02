/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <tkelsie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 13:48:20 by tkelsie           #+#    #+#             */
/*   Updated: 2019/05/02 19:16:28 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(int ac, char **av)
{
	int		fd;
	char	*line;
	int k;
	int g;

	k = ft_atoi(av[2]);
	fd = 0;
	g = 0;
	line = ft_strnew(1);
	line[0] = '\0';
	if (ac > 1)
	{
		fd = open(av[1], O_RDONLY);
		while (k--)
		{
			g = get_next_line(fd, &line);
			printf("%d line: %s\n", g, line);
		}
		close(fd);
	}
	return (fd);
}
