/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 18:11:45 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/12 18:11:48 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
		{
			nb++;
		}
		i++;
	}
	return (nb);
}
