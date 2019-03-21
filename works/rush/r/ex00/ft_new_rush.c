/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_rush.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnesoi <bnesoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 17:33:41 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/17 22:39:42 by bnesoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	put_line(int count, char start_end[2], char middle, char *dest)
{
	int i;

	i = 1;
	while (i <= count)
	{
		if (i == 1)
			*dest++ = start_end[0];
		else if (i == count)
		{
			*dest++ = start_end[1];
		}
		else
			*dest++ = middle;
		i++;
	}
	*dest++ = '\n';
}

void	put_rush(int x, int y, char shema[7], char *dest)
{
	int		row;
	int		pos;

	pos = 0;
	if (x <= 0 || y <= 0)
		return ;
	row = 0;
	while (row < y)
	{
		if (row == 0)
			put_line(x, &shema[0], shema[4], &dest[pos]);
		else if (row == y - 1)
			put_line(x, &shema[2], shema[4], &dest[pos]);
		else
			put_line(x, &shema[4], ' ', &dest[pos]);
		pos += (x + 1);
		row++;
	}
	dest[pos] = '\0';
}
