/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnesoi <bnesoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 10:27:29 by bnesoi            #+#    #+#             */
/*   Updated: 2019/03/17 15:13:45 by bnesoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int			result;
	int			sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\n' || *str == '\r' || *str == '\t' ||
			*str == '\v' || *str == '\f')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + ((int)*str - '0');
		str++;
	}
	return (result * sign);
}
