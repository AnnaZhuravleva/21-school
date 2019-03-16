/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 16:03:33 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/07 16:19:11 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *range;
	int len;

	if (min >= max)
		return (NULL);
	len = 0;
	range = (int*)malloc(sizeof(*range) * (max - min));
	while (min < max)
	{
		range[len] = min;
		len++;
		min++;
	}
	return (range);
}
