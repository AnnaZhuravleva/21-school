/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 17:49:28 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/13 17:49:34 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>


int		ft_list_size(t_list *begin_list);
void	ft_putstr(char *str);
void	print_list(t_list *list);
void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_push_phront(t_list **begin_list, void *data);
t_list	*ft_list_last(t_list *begin_list);
t_list *ft_list_push_params(int ac, char **av);
#endif


