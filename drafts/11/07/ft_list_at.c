/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 19:46:37 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/13 20:07:33 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"
#include "lib.h"

t_list  *ft_list_at(t_list *begin_list, unsigned int nb)
{
    t_list *tmp;
    unsigned int i;

	tmp = begin_list;
    i = 1;
   	if (tmp)
	{
		while (i < nb)
		{
			tmp = tmp->next;
            i++;
		}
        //return (tmp);
	}
    else
    {
        return (0);
    }
    print_list(tmp);
    return (tmp);
}


