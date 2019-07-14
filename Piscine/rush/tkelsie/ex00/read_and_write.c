/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_and_write.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/10 22:25:27 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/10 22:55:49 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putstr(char *str);

int		input(char **argv, int **matrix)
{
	int x;
	int y;

	x = 0;
	while (x < 9)
	{
		matrix[x] = (int*)malloc(sizeof(*matrix) * 9);
		y = 0;
		while (y < 9)
		{
			if (argv[x][y] >= '1' && argv[x][y] <= '9')
				matrix[x][y] = argv[x][y] - '0';
			else if (argv[x][y] == '0')
				matrix[x][y] = 0;
			else
			{
				ft_putstr("Error\n");
				return (0);
			}
			y++;
		}
		x++;
	}
	return (0);
}
