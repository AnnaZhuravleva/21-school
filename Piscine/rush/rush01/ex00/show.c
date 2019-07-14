/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 19:35:11 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/11 20:19:58 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	show(int **matrix)
{
	int x;
	int y;

	x = 0;
	while (x < 9)
	{
		y = 0;
		while (y < 9)
		{
			if (matrix[x][y] > 0)
				ft_putchar(matrix[x][y] + '0');
			else
				ft_putchar('.');
			if (y < 8)
				ft_putchar(' ');
			else
			{
				ft_putchar('\n');
			}
			y++;
		}
		x++;
	}
}
