/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_stdin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnesoi <bnesoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 19:55:29 by bnesoi            #+#    #+#             */
/*   Updated: 2019/03/17 23:08:09 by bnesoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_read_stdin(void)
{
	t_list		*buffer;
	char		swap;
	char		*result;
	int			len;

	buffer = NULL;
	result = NULL;
	len = 0;
	while (read(0, &swap, 1) > 0)
	{
		ft_list_push_front(&buffer, swap);
		len++;
	}
	if ((result = malloc(sizeof(*result) * len + 1)) == NULL)
		return (NULL);
	ft_list_reverse(&buffer);
	ft_list_copy_free(&buffer, result);
	result[len] = '\0';
	return (result);
}

void	ft_list_copy_free(t_list **begin_list, char *dest)
{
	t_list *next;
	t_list *current;

	next = NULL;
	current = *begin_list;
	while (current)
	{
		*dest = current->data;
		dest++;
		if (current->next)
			next = current->next;
		else
			next = NULL;
		free(current);
		current = next;
	}
	*begin_list = NULL;
}
