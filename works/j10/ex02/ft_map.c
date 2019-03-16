/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 22:36:31 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/11 22:54:56 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
