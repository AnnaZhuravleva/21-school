/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/10 22:59:28 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/11 20:16:56 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check(int **matrix, int x, int y, int val);

int		solution(int **matrix, int val)
{
	int x;
	int y;
	int i;

	x = val / 9;
	y = val % 9;
	i = 1;
	if (val >= 81)
		return (1);
	if (matrix[x][y] != 0)
		return (solution(matrix, val + 1));
	while (i < 10)
	{
		if (check(matrix, x, y, i))
		{
			matrix[x][y] = i;
			if (solution(matrix, val + 1))
				return (1);
			else
				matrix[x][y] = 0;
		}
		i++;
	}
	return (0);
}
