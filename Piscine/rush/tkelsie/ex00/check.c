/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/10 23:16:51 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/10 23:17:02 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(int **matrix, int x, int y, int val)
{
	int a;
	int b;

	a = 0;
	while (a < 9)
	{
		if (matrix[a][y] == val || matrix[x][a] == val)
			return (0);
		a++;
	}
	a = 0;
	while (a < 3)
	{
		b = 0;
		while (b < 3)
		{
			if (matrix[x / 3 * 3 + a][y / 3 * 3 + b] == val)
				return (0);
			b++;
		}
		a++;
	}
	return (1);
}
