/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
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
void	files(int ac, char **av)
{
	int		fd;
	int		i;
	char	buf;

	while (i < ac)
	{
		fd = open(av[1], O_RDONLY);
		if (fd >= 0)
		{
			while (read(fd, &buf, 1) != 0)
				write(1, &buf, 1);
			write(1, "\n", 1);
			close(fd);
		}
		else
		{
			ft_putstr("cat: ");
			ft_putstr(av[i]);
			ft_putstr(": No such file or directory\n");
		}
		i++;
	}
}
int		main(int ac, char **av)
{
	files(ac, av);
	return (0);
}
