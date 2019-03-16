/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 14:39:40 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/07 14:39:50 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int min, int max)
{
    int     *range;
    int		len;
    int     i;

	if (min >= max)
        return (NULL);
    len = 0;
    i = 0;
	range = (int*)malloc(sizeof(*range) * (max - min + 1));
    while (min < max)
    {
        range[len] = min;
        printf("%i ", range[len]);
        len++;
        min++;
        
    }
    printf("\n");
    return(range);
}
int main()
{
    ft_range(1, 3);
    ft_range(56,8);
    ft_range(2147483640,2147483647);
    ft_range(-13,84);
    return(0);
}

