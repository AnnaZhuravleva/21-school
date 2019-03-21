/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <tkelsie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 18:14:55 by bnesoi            #+#    #+#             */
/*   Updated: 2019/03/18 22:11:55 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *next;
	t_list *current;

	next = NULL;
	current = *begin_list;
	while (current)
	{
		if (current->next)
			next = current->next;
		else
			next = NULL;
		free(current);
		current = next;
	}
	*begin_list = NULL;
}
