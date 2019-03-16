/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 18:11:33 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/13 19:33:36 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list			*ft_list_push_params(int ac, char **av)
{
	t_list		*list;
	t_list		*tmp;
	int			i;

	i = 1;
	tmp = 0;
	while (i < ac)
	{
		list = ft_create_elem(av[i]);
		list->next = tmp;
		tmp = list;
		i++;
	}
	return (list);
}
