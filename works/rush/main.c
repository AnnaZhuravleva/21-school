/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/10 22:56:01 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/10 23:41:25 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdlib.h>

void	show;

int	main(int argc, int **argv)
{
	int **matrix;

	matrix = (int **)malloc(sizeof(int *) * 9);
	if (argc == 10)
	{
		matrix = input(&argv[1], *matrix);
		if (matrix == NULL)
		{
			ft_putstr("Error\n");
			return (1);
		}
		if (solution(matrix, 0))
			show(**matrix);
		else
		{
			ft_putstr("Error\n");
			return (1);
		}
	}
	else
	{
		ft_putstr("Error\n");
		return (1);
	}
	return (0);
}
