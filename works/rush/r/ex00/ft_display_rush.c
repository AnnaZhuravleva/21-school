/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_rush.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnesoi <bnesoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 16:14:01 by bnesoi            #+#    #+#             */
/*   Updated: 2019/03/17 22:41:21 by bnesoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	display_line(int count, char start_end[2], char middle)
{
	int i;

	i = 1;
	while (i <= count)
	{
		if (i == 1)
			ft_putchar(start_end[0]);
		else if (i == count)
			ft_putchar(start_end[1]);
		else
			ft_putchar(middle);
		i++;
	}
}

void	display_rush(int x, int y, char shema[7])
{
	int		row;
	char	middle[2];

	middle[0] = shema[5];
	middle[1] = shema[5];
	if (x <= 0 || y <= 0)
		return ;
	row = 1;
	while (row <= y)
	{
		if (row == 1)
			display_line(x, &shema[0], shema[4]);
		else if (row == y)
			display_line(x, &shema[2], shema[4]);
		else
			display_line(x, middle, ' ');
		ft_putchar('\n');
		row++;
	}
}
