/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnesoi <bnesoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 15:11:17 by bnesoi            #+#    #+#             */
/*   Updated: 2019/03/17 23:07:30 by bnesoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct	s_list
{
	char			data;
	struct s_list	*next;
}				t_list;
t_list			*ft_create_elem(char data);
int				ft_list_size(t_list *begin_list);
void			ft_list_push_front(t_list **begin_list, char data);
void			ft_list_clear(t_list **begin_list);
void			ft_list_copy_free(t_list **begin_list, char *dest);
void			ft_list_push_back(t_list **begin_list, char data);
void			ft_list_reverse(t_list **begin_list);

#endif
