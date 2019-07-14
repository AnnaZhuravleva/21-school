/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 15:49:46 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/02 17:18:16 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int i;

	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 1)
	{
		return (1);
	}
	else
	{
		i = nb * ft_recursive_factorial(nb - 1);
		return (nb * ft_recursive_factorial(nb - 1));
	}
}
