/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_rush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnesoi <bnesoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 15:03:33 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/17 22:40:32 by bnesoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*g_rush[7] =
{
	"oooo-|",
	"/\\\\/**",
	"AACCBB",
	"ACACBB",
	"ACCABB",
	NULL,
};

void	put_rush_repr(int x, int y, int num)
{
	ft_putstr("[rush0");
	ft_putnbr(num);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}

char	*generate_rush(int x, int y, char shema[7])
{
	char	*generated;

	if ((generated = (char *)malloc(
			sizeof(char) * (y * x + y + 1))) == NULL)
		return (0);
	put_rush(x, y, shema, generated);
	return (generated);
}

int		is_rush(char *str)
{
	char	*generated;
	int		n;
	int		x;
	int		y;
	int		hit;

	hit = 0;
	y = get_dim_y(str);
	x = get_dim_x(str);
	n = 0;
	while (n < 5 && x && y)
	{
		generated = generate_rush(x, y, g_rush[n]);
		if (ft_strcmp(generated, str) == 0)
		{
			!(hit) || ft_putstr(" || ");
			put_rush_repr(x, y, n);
			hit = 1;
		}
		free(generated);
		n++;
	}
	(hit) || ft_putstr("aucune");
	ft_putstr("\n");
	return (n);
}
