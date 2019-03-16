/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 16:03:33 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/07 16:18:46 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_ultimate_range(int **range, int min, int max)
{
	int len;
	int *r;
	int p;

	if (min >= max)
	{
		*range = NULL;
	}
	len = 0;
	r = (int*)malloc(sizeof(*r) * (max - min));
	p = 0;
	while (len < max - min)
	{
		r[len] = min + len;
		p = min + len;
		printf("%i ", r[len] );
		len++;
		
	}
	*range = r;
	return (len);
}
