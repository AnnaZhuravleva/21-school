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

int	ft_any(char **tab,  int (*f)(char*));

int	fun(char *str)
{
	if (str[0] == 'a')
	{
		printf("%s", str);
		return (1);
	}		
	else
		return (0);
}
int main ()
{
	char *arr []= {"leng45", "leng", "leng", "alpgha", 0};
  	int copy =0;
  	copy = ft_any (arr, &fun);
  	printf("%d", copy);

  return 0;
}