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

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int	fun(int a, int b)
{
	
	if (a < b)
	{
		printf("%d < %d\n", a, b);
		return (-1);
	}
	if (a == b)
	{
		printf("%d = %d\n", a, b);
		return (0);
	}
	else
	{
		printf("%d > %d\n", a, b);
		return (1);
	}
		
}
int main ()
{
	int arr[10] = {1, 1, 2, 3, 4, 5, 80};
	int arr2[10]  = {1, 0, 1, 2, 3, 4, 5, 80};
  	int copy;
	
  	//copy = ft_is_sort(arr,7, &fun);
  	//printf("%d ", copy);
	copy = ft_is_sort(arr2, 8, &fun);
  	printf("%d ", copy);

  	return (0);
}