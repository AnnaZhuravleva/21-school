/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 16:34:00 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/02 17:19:13 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int res;

	i = 1;
	res = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		res = 1;
	}
	else
	{
		while (i < power)
		{
			res = res * nb;
			i++;
		}
	}
	return (res);
}
