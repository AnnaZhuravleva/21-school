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
#include <stdio.h>

void	ft_list_push_phront(t_list **begin_list, void *data)
{
	t_list *list;
	t_list *tmp;

	tmp = *begin_list;
	list = ft_create_elem(data);
	if (list)
	{
		list->next = tmp;
		*begin_list = list;
	}
}