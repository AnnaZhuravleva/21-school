/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 16:27:37 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/07 16:38:15 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_generic(void)
{
	char *c;
	int i;

	i = 0;
	c = "Tut tut ; Tut tut\n";
	while(c[i] != '\0')
	{
		write(1, &c[i], 1);
		i++;
	}
}
