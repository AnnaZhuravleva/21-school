/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 22:07:37 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/05 18:18:44 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int a;
	int b;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	b = nb / 1;
	a = 1;
	while (b / 10 > 0)
	{
		b = b / 10;
		a = a * 10;
	}
	while (a > 0)
	{
		ft_putchar(nb / a + '0');
		nb = nb % a;
		a = a / 10;
	}
	ft_putchar('\n');
}
