/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 16:03:33 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/07 17:34:16 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int *r;

	len = 0;
	if (min >= max)
	{
		*range = NULL;
	}
	r = (int*)malloc(sizeof(*r) * (max - min));
	while (len < max - min)
	{
		r[len] = min + len;
		len++;
	}
	*range = r;
	return (len);
}
