/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 12:54:59 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/13 12:58:29 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void	ft_putstr(char *str);
void	print_list(t_list *list);
void	ft_list_push_back(t_list **begin_list, void *data);

int		main(void)
{
	t_list *list;

	list = ft_create_elem("asdf\n");
	ft_list_push_back(&list, "test\n");
	//ft_list_push_back(&list, "test\n");
	ft_list_push_back(&list, "lambda\n");

	print_list(list);

	return (0);
}
