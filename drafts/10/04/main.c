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

int	ft_count_if(char **tab, int (*f)(char*));

int	fun(char *str)
{
	if (str[0] == 'a' | str[0] == 'l')
	{
		printf("%s", str);
		printf("\n");
		return (1);
	}		
	else
		printf("\n");
		return (0);
}
int main ()
{
	char *arr []= {"leng45", "leng",0, "pa", "leng", "alpgha", 0};
  	int copy;
	
  	copy = ft_count_if(arr, &fun);
  	printf("%d", copy);

  	return (0);
}