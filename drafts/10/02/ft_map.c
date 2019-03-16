/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 22:36:31 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/11 22:53:07 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	my_sqrt(int c)
{
	printf("%d  ", c * c);
	return (c * c);
}

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *array;

	i = 0;
	array = (int *)malloc(sizeof(*array) * length);
	while (i < length)
	{
		array[i] = f(tab[i]);
		i++;
	}
	return (array);
}

int	main()
{
	int mas[10] = {1, 2, 3, 4, 5};

	ft_map(mas, 5, &my_sqrt);
	return (0);
}
