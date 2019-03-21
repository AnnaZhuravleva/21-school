/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnesoi <bnesoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 14:52:48 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/17 22:27:49 by bnesoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_putstr(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		ft_putchar(str[a]);
		a++;
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10 || nb <= -10)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) * (-1 + 2 * (nb > 0)) + '0');
	}
	else
	{
		if (nb < 0)
			ft_putchar('-');
		ft_putchar((nb % 10) * (-1 + 2 * (nb > 0)) + '0');
	}
}
