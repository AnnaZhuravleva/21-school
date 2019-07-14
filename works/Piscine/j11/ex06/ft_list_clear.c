/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 19:46:37 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/13 20:07:33 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *tmp;
	t_list *list;

	tmp = *begin_list;
	while (tmp)
	{
		if (tmp->next)
		{
			list = tmp->next;
		}
		else
		{
			tmp->next = 0;
		}
		free(list);
		list = tmp;
	}
}
