/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 17:40:48 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/11 17:44:13 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void kvadrat(int c)
{
    printf("%i", c);
}

void	fr_foreach(int *tab, int length, void (*f)(int))
{
    int i;

    i = 0;
	while (i < length)
    {
        f(tab[i]);
        i++;
    }
}
int    main(void)
{
    int massiv[10] = {5, 6, 8};

    fr_foreach(massiv, 3, &kvadrat);   
    return (0);
}