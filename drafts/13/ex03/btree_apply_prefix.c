/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkelsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 18:29:45 by tkelsie           #+#    #+#             */
/*   Updated: 2019/03/15 19:10:01 by tkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	t_tree *node;

	btree = (t_btree*)malloc(sizeof(node));
	if (!root)
		return (0);
	(*applyf)(root->item);
	btree_apply_prefix(root->left, applyf);
	btree_apply_prefix(root->right, applyf);
	return (btree);
}
