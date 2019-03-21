/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnesoi <bnesoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 15:36:16 by bnesoi            #+#    #+#             */
/*   Updated: 2019/03/17 20:20:39 by bnesoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_list_push_back(t_list **begin_list, char data)
{
	t_list *last;

	last = *begin_list;
	if (last)
	{
		while (last->next)
			last = last->next;
		last->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
