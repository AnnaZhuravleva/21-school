/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_phront.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 14:47:03 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/13 15:17:43 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list *tmp;
	int nb;

	tmp = begin_list;
	nb = 0;
	if (tmp == 0)
		return (0);
	while (tmp->next != 0)
	{
		nb++;
		tmp = tmp->next;
	}
	return (nb);
}
