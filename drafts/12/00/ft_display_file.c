/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 16:02:06 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/14 18:10:48 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	int		fd;
	char	buf;

	if (ac < 2)
		ft_putstr("File name missing.\n");
	else if (ac > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
			return (1);
		while (read(fd, &buf, 1) != 0)
			write(1, &buf, 1);
		if (close(fd) == -1)
			return (1);
	}
	return (0);
}
