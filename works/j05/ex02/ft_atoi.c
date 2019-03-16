/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 18:19:21 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/05 18:24:55 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int res;
	int index;
	int koef;

	index = 0;
	res = 0;
	koef = 1;
	while (str[index] - '0' == -16)
		str++;
	if (str[0] - '0' == -3)
	{
		koef = -1;
		str++;
	}
	if (str[0] - '0' < 0 | str[0] - '0' > 9)
		return (0);
	while (str[index] && (str[index] >= '0') && (str[index] <= '9'))
	{
		res = res * 10 + str[index] - '0';
		index++;
	}
	if (koef == -1)
		res *= -1;
	return (res);
}
