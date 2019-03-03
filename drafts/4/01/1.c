/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   j41.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 14:54:36 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/02 14:54:42 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int i;


	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 1)
    {
        return (1);
    }
    else if ()
    {
        i = nb * ft_recursive_factorial(nb - 1);
        return (nb * ft_recursive_factorial(nb - 1));
    }

    
}
int main()
{
    int i;
    
    ft_recursive_factorial(3);
    i = ft_recursive_factorial(3);
    printf("%i", i);
    return(0);
}
