/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 17:02:34 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/03 17:09:14 by lweather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char symbol);

void	ft_hor(int x)
{
	int i;

	i = 0;
	while (i <= x)
	{
		if (i == 0 | i == x - 1)
		{
			ft_putchar('o');
		}
		else if (i == x)
		{
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('-');
		}
		i++;
	}
}

void	ft_ver(int x)
{
	int k;

	k = 0;
	while (k <= x)
	{
		if (k == 0 | k == x - 1)
		{
			ft_putchar('|');
		}
		else if (k == x)
		{
			ft_putchar('\n');
		}
		else
		{
			ft_putchar(' ');
		}
		k++;
	}
}

void	rush(int x, int y)
{
	int k;

	k = 0;
	while (k < y)
	{
		if (k == 0 | k == y - 1)
		{
			ft_hor(x);
		}
		else
		{
			ft_ver(x);
		}
		k++;
	}
}
