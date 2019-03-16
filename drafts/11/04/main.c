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

#include "lib.h"


int		main(void)
{
	t_list *list;

	list = 0;
	list = ft_create_elem("asdf\n");
	ft_list_push_phront(&list, "test\n");
	ft_list_push_phront(&list, "lambda\n");
	ft_list_push_back(&list, "mama\n");
	print_list(list);
	printf("%d\n\n", ft_list_size(list));
	list = 0;
	print_list(ft_list_last(list));
	return (0);
}
