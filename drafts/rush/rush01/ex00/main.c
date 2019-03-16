/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/10 22:56:01 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/11 20:25:06 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		check(int **matrix, int x, int y, int val);
int		**input(char **argv, int **matrix);
void	show(int **matrix);
int		solution(int **matrix, int val);

int		main(int argc, char **argv)
{
	int **matrix;

	matrix = (int **)malloc(sizeof(int *) * 9);
	if (argc)
	{
		input(&argv[1], matrix);
		if (matrix == NULL)
		{
			ft_putstr("Error\n");
			return (1);
		}
		if (solution(matrix, 0))
			show(matrix);
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
