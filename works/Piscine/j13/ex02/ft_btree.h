/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 18:30:06 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/15 21:19:56 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef	struct	s_btree
{
	struct s_btree		*left;
	struct s_btree		*right;
	void				*item;
}				t_btree;
t_btree			*btree_create_node(void *item);
#endif
