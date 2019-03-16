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
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
  t_btree *btree;
  btree = (t_btree *)malloc(sizeof(btree));
	if (btree)
	{
		btree->left = 0;
		btree->right = 0;
		btree->item = item;
	}
	return (btree);
}

void printtree(t_btree *root, int space)
{
    
    int i;
    i = 0;

    // Base case
    if (root == NULL)
        return;
    // Increase distance between levels
    space += i;
    // Process right child first
    printtree(root->left, space);
    // Print current node after space
    // count
    printf("\n");
    while (i < space)
      printf(" ");
      i++;
    printf("%s\n", root->item);
    //Process left child
    printtree(root->right, space);
    printtree(root->item, space);
    
    //printf("%s\n", root->item);
}



void btree_apply_prefix(t_btree *root, void (*applyf)(void*))
{
  if (!root)
    return;
  (*applyf)(root->item);
  btree_apply_prefix(root->left, applyf);
  btree_apply_prefix(root->right, applyf);
}

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	btree_apply_infix(root->left, applyf);
	(*applyf)(root->item);
	btree_apply_infix(root->right, applyf);
}

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	btree_apply_suffix(root->left, applyf);
	btree_apply_suffix(root->right, applyf);
	(*applyf)(root->item);
}


int main()
{
  t_btree *root;
  root = btree_create_node("111");
  root->right = btree_create_node("3");
  root->left = btree_create_node("5");
  
  
  printtree(root, 0);
  return (0);
}