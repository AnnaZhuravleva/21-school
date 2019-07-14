/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnesoi <bnesoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 15:36:16 by bnesoi            #+#    #+#             */
/*   Updated: 2019/03/17 20:02:01 by bnesoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_list_push_front(t_list **begin_list, char data)
{
	t_list *first;

	first = *begin_list;
	*begin_list = ft_create_elem(data);
	if (first)
	{
		(*begin_list)->next = first;
	}
}
